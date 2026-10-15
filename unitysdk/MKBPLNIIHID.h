#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKBPLNIIHID_RF_BlockComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickSpecialViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define MKBPLNIIHID_ABJHKAKEGFD_OFFSET UNITYSDK_OFFSET(0x1C71F010)
#define MKBPLNIIHID_AJCPJODNBNI_OFFSET UNITYSDK_OFFSET(0x1C71EF90)
#define MKBPLNIIHID_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71F5A0)
#define MKBPLNIIHID_FABOELMOGDA_OFFSET UNITYSDK_OFFSET(0x1C71F140)
#define MKBPLNIIHID_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C71F500)
#define MKBPLNIIHID_FPFPEECFGFC_OFFSET UNITYSDK_OFFSET(0x1C71F190)
#define MKBPLNIIHID_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C71F1A0)
#define MKBPLNIIHID_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C71F4A0)
#define MKBPLNIIHID_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C71F550)
#define MKBPLNIIHID_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C71F340)
#define MKBPLNIIHID_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C71F0F0)
#define MKBPLNIIHID_OBKHDPBJBND_OFFSET UNITYSDK_OFFSET(0x1C71F060)
#define MKBPLNIIHID_PGFBKNALCKD_OFFSET UNITYSDK_OFFSET(0x1C71F130)
#define MKBPLNIIHID_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C71F0E0)

inline static constexpr unsigned int MKBPLNIIHID_TypeDefinitionIndex = 37069;

	class MKBPLNIIHID : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType GKJIIKPDINH; // 0x10
		::MKBPLNIIHID_RF_BlockComponent HFKLFHBEDEM; // 0x11
		::System::UInt32 GDFOHMFNOOL; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBPLNIIHID_CTOR_OFFSET))(this);
		}

		::System::Void AJCPJODNBNI(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + MKBPLNIIHID_AJCPJODNBNI_OFFSET))(this, a1);
		}

		::System::Void OBKHDPBJBND(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + MKBPLNIIHID_OBKHDPBJBND_OFFSET))(this, a1);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBPLNIIHID_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBPLNIIHID_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt32 PGFBKNALCKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBPLNIIHID_PGFBKNALCKD_OFFSET))(this);
		}

		::System::Void FABOELMOGDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKBPLNIIHID_FABOELMOGDA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType FPFPEECFGFC()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBPLNIIHID_FPFPEECFGFC_OFFSET))(this);
		}

		::System::Void ABJHKAKEGFD(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + MKBPLNIIHID_ABJHKAKEGFD_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + MKBPLNIIHID_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + MKBPLNIIHID_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + MKBPLNIIHID_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::MKBPLNIIHID_RF_BlockComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKBPLNIIHID_RF_BlockComponent))((::PBYTE)hIl2Cpp + MKBPLNIIHID_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBPLNIIHID_NBLPPFGNHHO_OFFSET))(this);
		}

	};
