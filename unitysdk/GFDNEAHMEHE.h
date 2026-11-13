#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
class KJEEDKIIMOO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GFDNEAHMEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4899C0)
#define GFDNEAHMEHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B489BA0)
#define GFDNEAHMEHE_LDNFLKPEABM_OFFSET UNITYSDK_OFFSET(0x1B489E70)
#define GFDNEAHMEHE_MJDDMNAKPME_1_OFFSET UNITYSDK_OFFSET(0x1B489F90)
#define GFDNEAHMEHE_MJDDMNAKPME_OFFSET UNITYSDK_OFFSET(0x1B489E00)
#define GFDNEAHMEHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B489A50)
#define GFDNEAHMEHE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B489B50)
#define GFDNEAHMEHE_TICK_OFFSET UNITYSDK_OFFSET(0x1B489D00)

inline static constexpr unsigned int GFDNEAHMEHE_TypeDefinitionIndex = 59442;

	class GFDNEAHMEHE : public ::GELIALJDFBL
	{
	public:
		::KJEEDKIIMOO* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* MPKAFEJFNKN; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Boolean GHDJKMOFAPI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KJEEDKIIMOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KJEEDKIIMOO*))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_TICK_OFFSET))(this, a1);
		}

		::System::Void LDNFLKPEABM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_LDNFLKPEABM_OFFSET))(this, a1);
		}

		::System::Boolean MJDDMNAKPME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_MJDDMNAKPME_OFFSET))(this);
		}

		static ::System::Boolean MJDDMNAKPME_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GFDNEAHMEHE_MJDDMNAKPME_1_OFFSET))(a1);
		}

	};
