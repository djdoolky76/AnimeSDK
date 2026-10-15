#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLPEFKGCAH.h"
class BAJENICFMMH;
namespace RPG::GameCore { class GameEntity; }

#define LBDONHEKHAP_AOEFMPIGEOI_OFFSET UNITYSDK_OFFSET(0xB5F8CA0)
#define LBDONHEKHAP_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xB5F8C20)
#define LBDONHEKHAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F9170)
#define LBDONHEKHAP_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB5F8BD0)
#define LBDONHEKHAP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB5F8C00)
#define LBDONHEKHAP_GET_PREV_OFFSET UNITYSDK_OFFSET(0xB5F8BB0)
#define LBDONHEKHAP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB5F8BF0)
#define LBDONHEKHAP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB5F8E90)
#define LBDONHEKHAP_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB5F8BE0)
#define LBDONHEKHAP_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB5F8C10)
#define LBDONHEKHAP_SET_PREV_OFFSET UNITYSDK_OFFSET(0xB5F8BC0)

inline static constexpr unsigned int LBDONHEKHAP_TypeDefinitionIndex = 53788;

	class LBDONHEKHAP
	{
	public:
		::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28
		::BAJENICFMMH* _Prev_k__BackingField; // 0x30
		::BAJENICFMMH* _Next_k__BackingField; // 0x38
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
