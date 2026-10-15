#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGMKDGACBNI;
namespace RPG::GameCore { class GameEntity; }

#define KIFCLJJAOFJ_CHINLBJOLJE_OFFSET UNITYSDK_OFFSET(0xB416CC0)
#define KIFCLJJAOFJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xB416C80)
#define KIFCLJJAOFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3E6940)
#define KIFCLJJAOFJ_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB416E80)
#define KIFCLJJAOFJ_DBKHHLKOBHO_OFFSET UNITYSDK_OFFSET(0xB416F00)
#define KIFCLJJAOFJ_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB416F10)
#define KIFCLJJAOFJ_JIKPFKJFKIC_OFFSET UNITYSDK_OFFSET(0xB416D90)
#define KIFCLJJAOFJ_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB416EC0)

inline static constexpr unsigned int KIFCLJJAOFJ_TypeDefinitionIndex = 53773;

	class KIFCLJJAOFJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x10
		::BGMKDGACBNI* AMPFMKELIBO; // 0x18
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
