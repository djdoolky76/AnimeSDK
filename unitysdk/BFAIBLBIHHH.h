#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define BFAIBLBIHHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB15C470)
#define BFAIBLBIHHH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB15C310)
#define BFAIBLBIHHH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB15C350)
#define BFAIBLBIHHH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB15C0A0)
#define BFAIBLBIHHH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB15C0B0)

inline static constexpr unsigned int BFAIBLBIHHH_TypeDefinitionIndex = 56144;

	class BFAIBLBIHHH : public ::DBGDNLLDPFI
	{
	public:
		::System::String* ODMGLJAJIJC; // 0x10
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint EKFIEAALOFF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAIBLBIHHH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAIBLBIHHH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAIBLBIHHH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAIBLBIHHH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAIBLBIHHH_ELEPDOMDAGA_OFFSET))(this);
		}

	};
