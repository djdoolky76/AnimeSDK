#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MANCPDFHDHO_RF_RPGDemoMoveComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define MANCPDFHDHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C94E0)
#define MANCPDFHDHO_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1D8C9440)
#define MANCPDFHDHO_GJEKHEACOKK_OFFSET UNITYSDK_OFFSET(0x1D8C9030)
#define MANCPDFHDHO_GKAJOHLHPLD_OFFSET UNITYSDK_OFFSET(0x1D8C9100)
#define MANCPDFHDHO_GMIIANPFMPA_OFFSET UNITYSDK_OFFSET(0x1D8C9110)
#define MANCPDFHDHO_HMPDMHMGJEG_OFFSET UNITYSDK_OFFSET(0x1D8C9050)
#define MANCPDFHDHO_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1D8C9180)
#define MANCPDFHDHO_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1D8C93E0)
#define MANCPDFHDHO_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1D8C9490)
#define MANCPDFHDHO_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1D8C92D0)
#define MANCPDFHDHO_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1D8C8FF0)
#define MANCPDFHDHO_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1D8C8FE0)

inline static constexpr unsigned int MANCPDFHDHO_TypeDefinitionIndex = 38110;

	class MANCPDFHDHO : public ::System::Object
	{
	public:
		::RPG::MVector3 PABJCPDCMNA; // 0x10
		::System::Single JBCFHCBCNAE; // 0x1C
		::MANCPDFHDHO_RF_RPGDemoMoveComponent HFKLFHBEDEM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCPDFHDHO_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCPDFHDHO_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCPDFHDHO_NOJIPMKAGON_OFFSET))(this);
		}

		::RPG::MVector3 GJEKHEACOKK()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCPDFHDHO_GJEKHEACOKK_OFFSET))(this);
		}

		::System::Void HMPDMHMGJEG(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MANCPDFHDHO_HMPDMHMGJEG_OFFSET))(this, a1);
		}

		::System::Single GKAJOHLHPLD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCPDFHDHO_GKAJOHLHPLD_OFFSET))(this);
		}

		::System::Void GMIIANPFMPA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MANCPDFHDHO_GMIIANPFMPA_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + MANCPDFHDHO_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + MANCPDFHDHO_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + MANCPDFHDHO_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::MANCPDFHDHO_RF_RPGDemoMoveComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MANCPDFHDHO_RF_RPGDemoMoveComponent))((::PBYTE)hIl2Cpp + MANCPDFHDHO_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANCPDFHDHO_NBLPPFGNHHO_OFFSET))(this);
		}

	};
