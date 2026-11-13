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

#define IJDKNKEGGMH_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0x180411D0)
#define IJDKNKEGGMH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18040D60)
#define IJDKNKEGGMH_CTOR_OFFSET UNITYSDK_OFFSET(0x18040DE0)
#define IJDKNKEGGMH_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0x180410A0)
#define IJDKNKEGGMH_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0x18041430)
#define IJDKNKEGGMH_HOLNBBBMLBB_OFFSET UNITYSDK_OFFSET(0x18041560)
#define IJDKNKEGGMH_IAJLGMGEOHC_OFFSET UNITYSDK_OFFSET(0x18041620)
#define IJDKNKEGGMH_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0x18041300)
#define IJDKNKEGGMH_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0x18040F70)
#define IJDKNKEGGMH_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0x18040DF0)
#define IJDKNKEGGMH_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x18040E40)

inline static constexpr unsigned int IJDKNKEGGMH_TypeDefinitionIndex = 73569;

	class IJDKNKEGGMH : public ::System::Object
	{
	public:
		::KAPEMBCNNIG* HMPDKCFLOFJ; // 0x10
		::INLHDGHHHEM* DPGOHINLLGB; // 0x18
		::KLCNPNHFKDI* DPADDGEMKNB; // 0x20
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
