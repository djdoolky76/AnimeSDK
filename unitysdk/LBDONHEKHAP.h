#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLPEFKGCAH.h"
class BAJENICFMMH;
namespace RPG::GameCore { class GameEntity; }

#define LBDONHEKHAP_AOEFMPIGEOI_OFFSET UNITYSDK_OFFSET(0xB5F29F0)
#define LBDONHEKHAP_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xB5F2970)
#define LBDONHEKHAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F2EC0)
#define LBDONHEKHAP_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB5F2920)
#define LBDONHEKHAP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB5F2950)
#define LBDONHEKHAP_GET_PREV_OFFSET UNITYSDK_OFFSET(0xB5F2900)
#define LBDONHEKHAP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB5F2940)
#define LBDONHEKHAP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB5F2BE0)
#define LBDONHEKHAP_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB5F2930)
#define LBDONHEKHAP_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB5F2960)
#define LBDONHEKHAP_SET_PREV_OFFSET UNITYSDK_OFFSET(0xB5F2910)

inline static constexpr unsigned int LBDONHEKHAP_TypeDefinitionIndex = 53788;

	class LBDONHEKHAP
	{
	public:
		::BAJENICFMMH* _Next_k__BackingField; // 0x28
		::BAJENICFMMH* _Prev_k__BackingField; // 0x30
		::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_CTOR_OFFSET))(this);
		}

		::BAJENICFMMH* get_Prev()
		{
			return ((::BAJENICFMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::BAJENICFMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + LBDONHEKHAP_SET_PREV_OFFSET))(this, a1);
		}

		::BAJENICFMMH* get_Next()
		{
			return ((::BAJENICFMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::BAJENICFMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + LBDONHEKHAP_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Owner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LBDONHEKHAP_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Boolean AOEFMPIGEOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDONHEKHAP_AOEFMPIGEOI_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::JMLPEFKGCAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLPEFKGCAH))((::PBYTE)hIl2Cpp + LBDONHEKHAP_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
