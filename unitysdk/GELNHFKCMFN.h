#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELNHFKCMFN_RF_RPGDemoBlockComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define GELNHFKCMFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4A1B0)
#define GELNHFKCMFN_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1AA4A110)
#define GELNHFKCMFN_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1AA49FE0)
#define GELNHFKCMFN_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1AA4A080)
#define GELNHFKCMFN_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1AA4A160)
#define GELNHFKCMFN_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1AA4A030)
#define GELNHFKCMFN_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1AA49FA0)
#define GELNHFKCMFN_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1AA49F90)

inline static constexpr unsigned int GELNHFKCMFN_TypeDefinitionIndex = 38108;

	class GELNHFKCMFN : public ::System::Object
	{
	public:
		::GELNHFKCMFN_RF_RPGDemoBlockComponent HFKLFHBEDEM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNHFKCMFN_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNHFKCMFN_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNHFKCMFN_NOJIPMKAGON_OFFSET))(this);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + GELNHFKCMFN_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GELNHFKCMFN_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GELNHFKCMFN_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::GELNHFKCMFN_RF_RPGDemoBlockComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GELNHFKCMFN_RF_RPGDemoBlockComponent))((::PBYTE)hIl2Cpp + GELNHFKCMFN_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNHFKCMFN_NBLPPFGNHHO_OFFSET))(this);
		}

	};
