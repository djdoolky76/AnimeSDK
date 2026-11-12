#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGMKDGACBNI;
namespace RPG::GameCore { class GameEntity; }

#define KIFCLJJAOFJ_CHINLBJOLJE_OFFSET UNITYSDK_OFFSET(0xBCB3A70)
#define KIFCLJJAOFJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xBCB3A30)
#define KIFCLJJAOFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCB3CD0)
#define KIFCLJJAOFJ_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBCB3C30)
#define KIFCLJJAOFJ_DBKHHLKOBHO_OFFSET UNITYSDK_OFFSET(0xBCB3CB0)
#define KIFCLJJAOFJ_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xBCB3CC0)
#define KIFCLJJAOFJ_JIKPFKJFKIC_OFFSET UNITYSDK_OFFSET(0xBCB3B40)
#define KIFCLJJAOFJ_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xBCB3C70)

inline static constexpr unsigned int KIFCLJJAOFJ_TypeDefinitionIndex = 54937;

	class KIFCLJJAOFJ : public ::System::Object
	{
	public:
		::BGMKDGACBNI* AMPFMKELIBO; // 0x10
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_CLEAR_OFFSET))(this);
		}

		::System::Void CHINLBJOLJE(::BGMKDGACBNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_CHINLBJOLJE_OFFSET))(this, a1);
		}

		::System::Void JIKPFKJFKIC(::BGMKDGACBNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_JIKPFKJFKIC_OFFSET))(this, a1);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_NLBNJGKAMII_OFFSET))(this);
		}

		::BGMKDGACBNI* DBKHHLKOBHO()
		{
			return ((::BGMKDGACBNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_DBKHHLKOBHO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCLJJAOFJ_FIIIDGBIHNB_OFFSET))(this);
		}

	};
