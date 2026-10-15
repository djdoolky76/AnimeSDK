#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define KBMFHPGBNFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB31AB10)
#define KBMFHPGBNFJ_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB31AA40)
#define KBMFHPGBNFJ_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB31AA80)
#define KBMFHPGBNFJ_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB31A850)
#define KBMFHPGBNFJ_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB31A860)

inline static constexpr unsigned int KBMFHPGBNFJ_TypeDefinitionIndex = 56115;

	class KBMFHPGBNFJ : public ::DBGDNLLDPFI
	{
	public:
		::System::String* IFNAGLOMHBK; // 0x10
		::System::String* MCLLALGABAB; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFHPGBNFJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFHPGBNFJ_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFHPGBNFJ_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFHPGBNFJ_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFHPGBNFJ_ELEPDOMDAGA_OFFSET))(this);
		}

	};
