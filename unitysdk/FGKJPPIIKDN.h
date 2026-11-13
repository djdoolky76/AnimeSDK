#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FGKJPPIIKDN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGKJPPIIKDN_CTOR_OFFSET UNITYSDK_OFFSET(0x18A90200)
#define FGKJPPIIKDN_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x18A90140)

inline static constexpr unsigned int FGKJPPIIKDN_TypeDefinitionIndex = 57525;

	class FGKJPPIIKDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AOKECJBFMCN; // 0x10
		::System::UInt32 CEMOCFBGFCM; // 0x18
		::System::UInt32 MIAMKAFBJEH; // 0x1C
		::RPG::GameCore::FixPoint FPCOPPLFBOP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKJPPIIKDN_CTOR_OFFSET))(this);
		}

		::FGKJPPIIKDN* HEPPBBLLBPN()
		{
			return ((::FGKJPPIIKDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKJPPIIKDN_HEPPBBLLBPN_OFFSET))(this);
		}

	};
