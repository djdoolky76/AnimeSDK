#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANACIPLIMDE.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TrainCakeCatchGameModule; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define MDEAJLBINBD_AJOOPAPEIML_OFFSET UNITYSDK_OFFSET(0xB89B7B0)
#define MDEAJLBINBD_BOEFIBKPEDC_OFFSET UNITYSDK_OFFSET(0xB89B230)
#define MDEAJLBINBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB89AF10)
#define MDEAJLBINBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB89AFF0)
#define MDEAJLBINBD_EEKCCGCNIHL_OFFSET UNITYSDK_OFFSET(0xB89B520)
#define MDEAJLBINBD_EOGDCKICMAD_OFFSET UNITYSDK_OFFSET(0xB89AFA0)
#define MDEAJLBINBD_FJHEPEIFMFE_OFFSET UNITYSDK_OFFSET(0xB89B380)
#define MDEAJLBINBD_GMEEECBEMJP_OFFSET UNITYSDK_OFFSET(0xB89B1E0)
#define MDEAJLBINBD_HBDJAODIHFI_OFFSET UNITYSDK_OFFSET(0xB89B090)
#define MDEAJLBINBD_HGLDDLIJPEE_OFFSET UNITYSDK_OFFSET(0xB89B840)
#define MDEAJLBINBD_KHDJKMHICEI_OFFSET UNITYSDK_OFFSET(0xB89B960)
#define MDEAJLBINBD_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0xB89B420)
#define MDEAJLBINBD_NMBFHHDFPEK_OFFSET UNITYSDK_OFFSET(0xB89B300)
#define MDEAJLBINBD_ODPBMNDJDKH_OFFSET UNITYSDK_OFFSET(0xB89B040)
#define MDEAJLBINBD_OHFLPJBGLIJ_OFFSET UNITYSDK_OFFSET(0xB89B160)

inline static constexpr unsigned int MDEAJLBINBD_TypeDefinitionIndex = 60211;

	class MDEAJLBINBD : public ::System::Object
	{
	public:
		::RPG::Client::TrainCakeCatchGameModule* HIFKHPKKLME; // 0x10
		::ANACIPLIMDE DILFKCJNMAP; // 0x18
		::System::Boolean MNCHHFGEMCJ; // 0x28
		::System::Boolean ALHJAKFIAAI; // 0x29
		::System::Boolean DOEJIMPEJHA; // 0x2A
		::System::Byte _padding0[0x1];
		::System::UInt32 MLEAEGBPGEI; // 0x2C
		::System::UInt32 EEJMGCCMGPN; // 0x30
		// static const ::System::String* OEFAGNJBKLN; // 0x0
		// static const ::System::String* CFNJLJIIINJ; // 0x0
		// static const ::System::String* OGAKGPEPEED; // 0x0
		// static const ::System::Object CAOFICACBNM; // 0x0
		::System::Void _ctor(::RPG::Client::TrainCakeCatchGameModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchGameModule*))((::PBYTE)hIl2Cpp + MDEAJLBINBD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_DISPOSE_OFFSET))(this);
		}

		::System::Void ODPBMNDJDKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_ODPBMNDJDKH_OFFSET))(this);
		}

		::System::Void OHFLPJBGLIJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MDEAJLBINBD_OHFLPJBGLIJ_OFFSET))(this, a1);
		}

		::System::Void GMEEECBEMJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_GMEEECBEMJP_OFFSET))(this);
		}

		::System::Void BOEFIBKPEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_BOEFIBKPEDC_OFFSET))(this);
		}

		::System::Void NIBJNBCAAIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEAJLBINBD_NIBJNBCAAIA_OFFSET))(this, a1);
		}

		::System::Void HBDJAODIHFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_HBDJAODIHFI_OFFSET))(this);
		}

		::System::Void EEKCCGCNIHL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEAJLBINBD_EEKCCGCNIHL_OFFSET))(this, a1);
		}

		::System::Void HGLDDLIJPEE(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEAJLBINBD_HGLDDLIJPEE_OFFSET))(this, a1, a2);
		}

		::System::Void FJHEPEIFMFE(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEAJLBINBD_FJHEPEIFMFE_OFFSET))(this, a1, a2);
		}

		::System::Void AJOOPAPEIML(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + MDEAJLBINBD_AJOOPAPEIML_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* NMBFHHDFPEK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_NMBFHHDFPEK_OFFSET))(this);
		}

		::System::Void EOGDCKICMAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_EOGDCKICMAD_OFFSET))(this);
		}

		::System::Void KHDJKMHICEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEAJLBINBD_KHDJKMHICEI_OFFSET))(this);
		}

	};
