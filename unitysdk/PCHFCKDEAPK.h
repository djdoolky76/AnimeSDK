#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define PCHFCKDEAPK_BCAIPCCEPFI_OFFSET UNITYSDK_OFFSET(0x1AAD0570)
#define PCHFCKDEAPK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AAD0510)
#define PCHFCKDEAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD05E0)
#define PCHFCKDEAPK_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0x1AAD05C0)
#define PCHFCKDEAPK_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0x1AAD05D0)

inline static constexpr unsigned int PCHFCKDEAPK_TypeDefinitionIndex = 71879;

	class PCHFCKDEAPK : public ::System::Object
	{
	public:
		::System::String* FLCPMEIBBKI; // 0x10
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x18
		::System::String* ECNKCCNJNPJ; // 0x20
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* FEMFCJCKOKC; // 0x28
		::System::String* BAHLDFMIJFG; // 0x30
		::System::UInt32 LFIEOIKFGNG; // 0x38
		::System::Boolean JGIFOKCNIMB; // 0x3C
		::System::Boolean ELNLFOJJHOO; // 0x3D
		::System::Boolean OLLCILOMNMH; // 0x3E
		::System::Boolean _IsReleased_k__BackingField; // 0x3F
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
