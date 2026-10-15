#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDBOHDAGDHD;
class EANJILGOKBE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDBOHDAGDHD_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xC760F90)
#define CDBOHDAGDHD_AOBPMAFNDDP_OFFSET UNITYSDK_OFFSET(0xC761420)
#define CDBOHDAGDHD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC760BB0)
#define CDBOHDAGDHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC760C70)
#define CDBOHDAGDHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC760E10)
#define CDBOHDAGDHD_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0xC760EB0)
#define CDBOHDAGDHD_JKOJMLEFCNM_OFFSET UNITYSDK_OFFSET(0xC761300)
#define CDBOHDAGDHD_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xC761270)
#define CDBOHDAGDHD_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0xC760CF0)
#define CDBOHDAGDHD_MFIIEBKNHAK_OFFSET UNITYSDK_OFFSET(0xC761080)
#define CDBOHDAGDHD_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0xC7611E0)

inline static constexpr unsigned int CDBOHDAGDHD_TypeDefinitionIndex = 72334;

	class CDBOHDAGDHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::EANJILGOKBE*>* DHKNPNGMLHD; // 0x10
		::System::Collections::Generic::List_1<::EANJILGOKBE*>* IJILNNAPAHH; // 0x18
		::System::Boolean EMJHNHGEFKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_CTOR_OFFSET))(this);
		}

		static ::CDBOHDAGDHD* BPLPBPMEODA(::System::Collections::Generic::List_1<::EANJILGOKBE*>* a1)
		{
			return ((::CDBOHDAGDHD*(*)(::System::Collections::Generic::List_1<::EANJILGOKBE*>*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_KCIEEJPFOCM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_DISPOSE_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void NLEKGFJGGCI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_NLEKGFJGGCI_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void MFIIEBKNHAK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_MFIIEBKNHAK_OFFSET))(this, a1);
		}

		::System::Void AOBPMAFNDDP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_AOBPMAFNDDP_OFFSET))(this, a1);
		}

		::System::Void JKOJMLEFCNM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBOHDAGDHD_JKOJMLEFCNM_OFFSET))(this, a1);
		}

	};
