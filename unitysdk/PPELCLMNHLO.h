#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPHINJGCEAO.h"
class EEJNNOAEEFO;
namespace RPG::GameCore { class GameEntity; }

#define PPELCLMNHLO_AOEFMPIGEOI_OFFSET UNITYSDK_OFFSET(0xC379FD0)
#define PPELCLMNHLO_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xC379F70)
#define PPELCLMNHLO_CTOR_OFFSET UNITYSDK_OFFSET(0xC37A440)
#define PPELCLMNHLO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC37A190)
#define PPELCLMNHLO_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xC379F20)
#define PPELCLMNHLO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xC379F50)
#define PPELCLMNHLO_GET_PREV_OFFSET UNITYSDK_OFFSET(0xC379F00)
#define PPELCLMNHLO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC379F40)
#define PPELCLMNHLO_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xC379F30)
#define PPELCLMNHLO_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xC379F60)
#define PPELCLMNHLO_SET_PREV_OFFSET UNITYSDK_OFFSET(0xC379F10)

inline static constexpr unsigned int PPELCLMNHLO_TypeDefinitionIndex = 56220;

	class PPELCLMNHLO
	{
	public:
		::EEJNNOAEEFO* _Prev_k__BackingField; // 0x28
		::EEJNNOAEEFO* _Next_k__BackingField; // 0x30
		::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_CTOR_OFFSET))(this);
		}

		::EEJNNOAEEFO* get_Prev()
		{
			return ((::EEJNNOAEEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::EEJNNOAEEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + PPELCLMNHLO_SET_PREV_OFFSET))(this, a1);
		}

		::EEJNNOAEEFO* get_Next()
		{
			return ((::EEJNNOAEEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::EEJNNOAEEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + PPELCLMNHLO_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Owner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPELCLMNHLO_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Boolean AOEFMPIGEOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPELCLMNHLO_AOEFMPIGEOI_OFFSET))(this);
		}

		::System::Void Execute(::KPHINJGCEAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHINJGCEAO))((::PBYTE)hIl2Cpp + PPELCLMNHLO_EXECUTE_OFFSET))(this, a1);
		}

	};
