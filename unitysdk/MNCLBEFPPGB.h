#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNCLBEFPPGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E86A0)
#define MNCLBEFPPGB_EAOIFEDPNMJ_OFFSET UNITYSDK_OFFSET(0xB9E85C0)
#define MNCLBEFPPGB_KKEJDPBPKBC_OFFSET UNITYSDK_OFFSET(0xB9E8530)

	class MNCLBEFPPGB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* LOCFAFEMJEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCLBEFPPGB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KKEJDPBPKBC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNCLBEFPPGB_KKEJDPBPKBC_OFFSET))(this, a1);
		}

		::System::Void EAOIFEDPNMJ(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MNCLBEFPPGB_EAOIFEDPNMJ_OFFSET))(this, a1, a2);
		}

	};
