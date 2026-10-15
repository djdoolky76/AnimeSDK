#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
class IJDKNKEGGMH;
class INLHDGHHHEM;
class KAPEMBCNNIG;
class KLCNPNHFKDI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IJDKNKEGGMH_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0x1645A1C0)
#define IJDKNKEGGMH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16459D50)
#define IJDKNKEGGMH_CTOR_OFFSET UNITYSDK_OFFSET(0x16459DD0)
#define IJDKNKEGGMH_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0x1645A090)
#define IJDKNKEGGMH_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0x1645A420)
#define IJDKNKEGGMH_HOLNBBBMLBB_OFFSET UNITYSDK_OFFSET(0x1645A550)
#define IJDKNKEGGMH_IAJLGMGEOHC_OFFSET UNITYSDK_OFFSET(0x1645A610)
#define IJDKNKEGGMH_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0x1645A2F0)
#define IJDKNKEGGMH_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0x16459F60)
#define IJDKNKEGGMH_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0x16459DE0)
#define IJDKNKEGGMH_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x16459E30)

inline static constexpr unsigned int IJDKNKEGGMH_TypeDefinitionIndex = 71583;

	class IJDKNKEGGMH : public ::System::Object
	{
	public:
		::INLHDGHHHEM* DPGOHINLLGB; // 0x10
		::KLCNPNHFKDI* DPADDGEMKNB; // 0x18
		::KAPEMBCNNIG* HMPDKCFLOFJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_CTOR_OFFSET))(this);
		}

		static ::IJDKNKEGGMH* BPLPBPMEODA()
		{
			return ((::IJDKNKEGGMH*(*)())((::PBYTE)hIl2Cpp + IJDKNKEGGMH_BPLPBPMEODA_OFFSET))();
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_HNDCGHCMIGL_OFFSET))(this, a1);
		}

		::System::Boolean HOLNBBBMLBB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_HOLNBBBMLBB_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterRank IAJLGMGEOHC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IJDKNKEGGMH_IAJLGMGEOHC_OFFSET))(this, a1);
		}

	};
