#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAHLPKGIABH;
class HNLKNLJBHDD;
class JGJKAJCHOIE;
class KPCDEJGJHBK;
class NNIKOAIKFMO;
class ODCELNBAEIB;
namespace Entitas { class EntityEvent; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Object; }
namespace System { class String; }

#define DLFGNLPOGJH_CDIPLIPLDGO_OFFSET UNITYSDK_OFFSET(0x1866C9E0)
#define DLFGNLPOGJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1866B660)
#define DLFGNLPOGJH_GJJDLFDIFIN_OFFSET UNITYSDK_OFFSET(0x1866BE10)
#define DLFGNLPOGJH_GNIADLGLDMO_OFFSET UNITYSDK_OFFSET(0x1866CCE0)
#define DLFGNLPOGJH_HJJAJKHBAFL_OFFSET UNITYSDK_OFFSET(0x1866BC20)
#define DLFGNLPOGJH_HNKBEBMODFP_OFFSET UNITYSDK_OFFSET(0x1866CE80)
#define DLFGNLPOGJH_IFFADFFBDFM_OFFSET UNITYSDK_OFFSET(0x1866C920)
#define DLFGNLPOGJH_IIJBKAFBNJG_OFFSET UNITYSDK_OFFSET(0x1866C2A0)
#define DLFGNLPOGJH_IKMKLEKNPEB_OFFSET UNITYSDK_OFFSET(0x1866CE30)
#define DLFGNLPOGJH_ILLAAEFNKDK_OFFSET UNITYSDK_OFFSET(0x1866C4D0)
#define DLFGNLPOGJH_JECMHAIDNHN_OFFSET UNITYSDK_OFFSET(0x1866BB00)
#define DLFGNLPOGJH_KCDCEBHJMAD_OFFSET UNITYSDK_OFFSET(0x1866BBC0)
#define DLFGNLPOGJH_LAIFHOKICGL_OFFSET UNITYSDK_OFFSET(0x1866B8F0)
#define DLFGNLPOGJH_PEGIMBMFBBH_OFFSET UNITYSDK_OFFSET(0x1866CB40)
#define DLFGNLPOGJH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1866B6E0)

inline static constexpr unsigned int DLFGNLPOGJH_TypeDefinitionIndex = 81881;

	class DLFGNLPOGJH : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphComponent* KBNONGCKNHF; // 0x10
		::NNIKOAIKFMO* HKCEFPHJGNC; // 0x18
		::Entitas::EntityEvent* IFIMDBAEJLB; // 0x20
		::ODCELNBAEIB* HOADGOKCPDG; // 0x28
		::System::Int32 AGEKNIDFHKG; // 0x30
		::System::Void _ctor(::ODCELNBAEIB* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void LAIFHOKICGL(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_LAIFHOKICGL_OFFSET))(this, a1, a2);
		}

		::System::Void JECMHAIDNHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_JECMHAIDNHN_OFFSET))(this);
		}

		::System::Void HJJAJKHBAFL(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_HJJAJKHBAFL_OFFSET))(this, a1);
		}

		::System::Void GJJDLFDIFIN(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_GJJDLFDIFIN_OFFSET))(this, a1);
		}

		::System::Void ILLAAEFNKDK(::HNLKNLJBHDD* a1, ::KPCDEJGJHBK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_ILLAAEFNKDK_OFFSET))(this, a1, a2);
		}

		::System::Void IFFADFFBDFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_IFFADFFBDFM_OFFSET))(this);
		}

		::System::Void CDIPLIPLDGO(::HNLKNLJBHDD* a1, ::KPCDEJGJHBK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_CDIPLIPLDGO_OFFSET))(this, a1, a2);
		}

		::System::Void PEGIMBMFBBH(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_PEGIMBMFBBH_OFFSET))(this, a1, a2);
		}

		::System::Void GNIADLGLDMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_GNIADLGLDMO_OFFSET))(this, a1);
		}

		::System::Void KCDCEBHJMAD(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_KCDCEBHJMAD_OFFSET))(this, a1, a2);
		}

		::System::Void IIJBKAFBNJG(::HNLKNLJBHDD* a1, ::JGJKAJCHOIE* a2, ::CAHLPKGIABH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*, ::JGJKAJCHOIE*, ::CAHLPKGIABH*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_IIJBKAFBNJG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IKMKLEKNPEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_IKMKLEKNPEB_OFFSET))(this);
		}

		::System::Void HNKBEBMODFP(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + DLFGNLPOGJH_HNKBEBMODFP_OFFSET))(this, a1);
		}

	};
