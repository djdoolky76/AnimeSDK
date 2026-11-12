#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GHCAHJCNDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1694F9D0)
#define GHCAHJCNDKP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1694F900)
#define GHCAHJCNDKP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1694F940)
#define GHCAHJCNDKP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1694F710)
#define GHCAHJCNDKP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1694F720)

inline static constexpr unsigned int GHCAHJCNDKP_TypeDefinitionIndex = 57314;

	class GHCAHJCNDKP : public ::DBGDNLLDPFI
	{
	public:
		::System::String* DOCIPOEABOM; // 0x10
		::System::String* NKKGKNFDPPH; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCAHJCNDKP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCAHJCNDKP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCAHJCNDKP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCAHJCNDKP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCAHJCNDKP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
