#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define PCHFCKDEAPK_BCAIPCCEPFI_OFFSET UNITYSDK_OFFSET(0xBFF9140)
#define PCHFCKDEAPK_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFF90E0)
#define PCHFCKDEAPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF91B0)
#define PCHFCKDEAPK_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xBFF9190)
#define PCHFCKDEAPK_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xBFF91A0)

inline static constexpr unsigned int PCHFCKDEAPK_TypeDefinitionIndex = 69920;

	class PCHFCKDEAPK : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* FEMFCJCKOKC; // 0x10
		::System::String* BAHLDFMIJFG; // 0x18
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x20
		::System::String* FLCPMEIBBKI; // 0x28
		::System::String* ECNKCCNJNPJ; // 0x30
		::System::Boolean ELNLFOJJHOO; // 0x38
		::System::Boolean _IsReleased_k__BackingField; // 0x39
		::System::Boolean OLLCILOMNMH; // 0x3A
		::System::Boolean JGIFOKCNIMB; // 0x3B
		::System::UInt32 LFIEOIKFGNG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHFCKDEAPK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHFCKDEAPK_CLEAR_OFFSET))(this);
		}

		::System::Void BCAIPCCEPFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PCHFCKDEAPK_BCAIPCCEPFI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHFCKDEAPK_GET_ISRELEASED_OFFSET))(this);
		}

		::System::Void set_IsReleased(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PCHFCKDEAPK_SET_ISRELEASED_OFFSET))(this, a1);
		}

	};
