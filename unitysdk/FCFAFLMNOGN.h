#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFAFLMNOGN_RF_ActualControlComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define FCFAFLMNOGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C611EC0)
#define FCFAFLMNOGN_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C611E20)
#define FCFAFLMNOGN_FILKCENGMGK_OFFSET UNITYSDK_OFFSET(0x1C611BC0)
#define FCFAFLMNOGN_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C611C20)
#define FCFAFLMNOGN_LGMOILEHECK_OFFSET UNITYSDK_OFFSET(0x1C611BD0)
#define FCFAFLMNOGN_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C611DC0)
#define FCFAFLMNOGN_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C611E70)
#define FCFAFLMNOGN_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C611D10)
#define FCFAFLMNOGN_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C611B80)
#define FCFAFLMNOGN_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C611B70)

	class FCFAFLMNOGN : public ::System::Object
	{
	public:
		::FCFAFLMNOGN_RF_ActualControlComponent HFKLFHBEDEM; // 0x10
		::System::UInt32 JEOOOGALEMG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt32 FILKCENGMGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_FILKCENGMGK_OFFSET))(this);
		}

		::System::Void LGMOILEHECK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_LGMOILEHECK_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::FCFAFLMNOGN_RF_ActualControlComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCFAFLMNOGN_RF_ActualControlComponent))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFAFLMNOGN_NBLPPFGNHHO_OFFSET))(this);
		}

	};
