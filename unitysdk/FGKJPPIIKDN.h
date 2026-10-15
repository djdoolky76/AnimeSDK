#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FGKJPPIIKDN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGKJPPIIKDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1575AE50)
#define FGKJPPIIKDN_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x1575AD90)

inline static constexpr unsigned int FGKJPPIIKDN_TypeDefinitionIndex = 56311;

	class FGKJPPIIKDN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AOKECJBFMCN; // 0x10
		::RPG::GameCore::FixPoint FPCOPPLFBOP; // 0x18
		::System::UInt32 MIAMKAFBJEH; // 0x20
		::System::UInt32 CEMOCFBGFCM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKJPPIIKDN_CTOR_OFFSET))(this);
		}

		::FGKJPPIIKDN* HEPPBBLLBPN()
		{
			return ((::FGKJPPIIKDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKJPPIIKDN_HEPPBBLLBPN_OFFSET))(this);
		}

	};
