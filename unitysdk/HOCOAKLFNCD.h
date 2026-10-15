#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKDAANCFPGO.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
class GCEBGLLMGPE;
class GKDAANCFPGO;
class PAPOPANPGIJ;
namespace RPG::GameCore { class StateTreeSubTreeConfig; }
namespace System { class String; }

#define HOCOAKLFNCD_BLNCFDKFHCO_OFFSET UNITYSDK_OFFSET(0x1C65A420)
#define HOCOAKLFNCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C659CE0)
#define HOCOAKLFNCD_ECIJJGIHGNJ_OFFSET UNITYSDK_OFFSET(0x1C65A3C0)
#define HOCOAKLFNCD_EONPIKKPLLA_OFFSET UNITYSDK_OFFSET(0x1C65A230)
#define HOCOAKLFNCD_GAHIJOOEMFF_OFFSET UNITYSDK_OFFSET(0x1C659F80)
#define HOCOAKLFNCD_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0x1C65A0C0)
#define HOCOAKLFNCD_KIGCIICCFBB_OFFSET UNITYSDK_OFFSET(0x1C65A000)
#define HOCOAKLFNCD_LDFEEJOHIDL_OFFSET UNITYSDK_OFFSET(0x1C65A480)
#define HOCOAKLFNCD_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0x1C659F20)
#define HOCOAKLFNCD_OBAOGFHPPFC_OFFSET UNITYSDK_OFFSET(0x1C65A1B0)
#define HOCOAKLFNCD_PFNDPAILDJP_OFFSET UNITYSDK_OFFSET(0x1C65A490)
#define HOCOAKLFNCD_PHLHELLLGNN_OFFSET UNITYSDK_OFFSET(0x1C65A140)

inline static constexpr unsigned int HOCOAKLFNCD_TypeDefinitionIndex = 36974;

	class HOCOAKLFNCD : public ::GKDAANCFPGO
	{
	public:
		::RPG::GameCore::StateTreeSubTreeConfig* OFKGLJOAMLD; // 0x68
		::GCEBGLLMGPE* BOABKEFHFAA; // 0x70
		::System::Boolean PMECLILMEDH; // 0x78
		::System::Void _ctor(::RPG::GameCore::StateTreeSubTreeConfig* a1, ::PAPOPANPGIJ* a2, ::GKDAANCFPGO* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeSubTreeConfig*, ::PAPOPANPGIJ*, ::GKDAANCFPGO*, ::System::Int32))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFANNGGMHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_NFANNGGMHAI_OFFSET))(this);
		}

		::System::Void GAHIJOOEMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_GAHIJOOEMFF_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TaskState JAENAEMJIOC(::System::Single a1)
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_JAENAEMJIOC_OFFSET))(this, a1);
		}

		::System::Void PHLHELLLGNN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_PHLHELLLGNN_OFFSET))(this, a1);
		}

		::System::Void OBAOGFHPPFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_OBAOGFHPPFC_OFFSET))(this);
		}

		::System::Int32 EONPIKKPLLA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_EONPIKKPLLA_OFFSET))(this);
		}

		::System::String* ECIJJGIHGNJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_ECIJJGIHGNJ_OFFSET))(this);
		}

		::System::String* BLNCFDKFHCO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_BLNCFDKFHCO_OFFSET))(this);
		}

		::System::Void KIGCIICCFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_KIGCIICCFBB_OFFSET))(this);
		}

		::GCEBGLLMGPE* LDFEEJOHIDL()
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_LDFEEJOHIDL_OFFSET))(this);
		}

		::System::String* PFNDPAILDJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCOAKLFNCD_PFNDPAILDJP_OFFSET))(this);
		}

	};
