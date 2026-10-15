#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACFFIADPJPJ_CMIEIPJFKMP_OFFSET UNITYSDK_OFFSET(0xB11CCA0)
#define ACFFIADPJPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB11D3D0)
#define ACFFIADPJPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB11CA90)
#define ACFFIADPJPJ_ENDMEGOJBIK_OFFSET UNITYSDK_OFFSET(0xB11D340)
#define ACFFIADPJPJ_HLLACJNDFDB_OFFSET UNITYSDK_OFFSET(0xB11CC40)
#define ACFFIADPJPJ_JENFDNLIDFE_OFFSET UNITYSDK_OFFSET(0xB11D260)
#define ACFFIADPJPJ_LNCILGLGPIB_OFFSET UNITYSDK_OFFSET(0xB11CEB0)
#define ACFFIADPJPJ_MAECLCJPHDB_OFFSET UNITYSDK_OFFSET(0xB11D1F0)

	class ACFFIADPJPJ : public ::System::Object
	{
	public:
		::System::String* FCOOFCJFFNP; // 0x10
		::GELIALJDFBL* MNLKGBJDKFK; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* POIBMHKAKAA; // 0x20
		::GELIALJDFBL* FCBHLMADIBB; // 0x28
		::RPG::GameCore::GameEntity* KBFOKFPHLAJ; // 0x30
		::System::Boolean MIFMINFBDIK; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TeamActionType PNHOOKEFGDA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HLLACJNDFDB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_HLLACJNDFDB_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LNCILGLGPIB(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_LNCILGLGPIB_OFFSET))(this, a1);
		}

		::System::Boolean MAECLCJPHDB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_MAECLCJPHDB_OFFSET))(this, a1);
		}

		::System::Void JENFDNLIDFE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_JENFDNLIDFE_OFFSET))(this, a1);
		}

		::System::Void ENDMEGOJBIK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_ENDMEGOJBIK_OFFSET))(this, a1);
		}

		::System::Boolean CMIEIPJFKMP(::RPG::GameCore::GameEntity* a1, ::GELIALJDFBL* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + ACFFIADPJPJ_CMIEIPJFKMP_OFFSET))(this, a1, a2);
		}

	};
