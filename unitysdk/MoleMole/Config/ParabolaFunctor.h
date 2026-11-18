#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/Config/ParabolaFunctor_JEOOFMIELEL.h"
#include "unitysdk/MoleMole/Config/ParabolaFunctor_PGHPCBGEGJO.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_BGGKAOOGGCH_OFFSET UNITYSDK_OFFSET(0x1B8B5520)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1B8B4E80)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MINSPEED_OFFSET UNITYSDK_OFFSET(0x1B8B4E70)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GJCCDHBMDLD_OFFSET UNITYSDK_OFFSET(0x1B8B5050)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_IMNCKPMMBLI_OFFSET UNITYSDK_OFFSET(0x1B8B56D0)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_KLMLAONPDOI_OFFSET UNITYSDK_OFFSET(0x1B8B5790)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_KNOHPFNLJGN_OFFSET UNITYSDK_OFFSET(0x1B8B5440)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_LMNGELHBBON_OFFSET UNITYSDK_OFFSET(0x1B8B5A40)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_MMNAGDNGJKL_OFFSET UNITYSDK_OFFSET(0x1B8B5130)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_NNAGLHOJFPJ_OFFSET UNITYSDK_OFFSET(0x1B8B4EA0)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B4E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ParabolaFunctor_TypeDefinitionIndex = 76158;

	class ParabolaFunctor : public ::System::Object
	{
	public:
		// static const ::System::Single ConstanstG; // 0x0
		::UnityEngine::Vector2 SpeedZone; // 0x10
		::UnityEngine::Vector2 AngleZone; // 0x18
		::System::Single Gravity; // 0x20
		::System::Int32 AngleCalStep; // 0x24
		::System::Single expectSpeed; // 0x28
		::System::Single expectAngle; // 0x2C
		::System::Single expectTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_MinSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MINSPEED_OFFSET))(this);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Single NNAGLHOJFPJ(::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO CENDLIKDNJA, ::System::Single NKDHDAJFKCC, ::System::Single IAKPGBCAAKM, ::System::Boolean CGHFEJEBLHI, ::System::Single& FNIOPKPHDEH)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_NNAGLHOJFPJ_OFFSET))(this, CENDLIKDNJA, NKDHDAJFKCC, IAKPGBCAAKM, CGHFEJEBLHI, FNIOPKPHDEH);
		}

		::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL MMNAGDNGJKL(::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO CENDLIKDNJA, ::System::Single NFDCFCBBLEF, ::System::Single GNBHIFFJNDJ)
		{
			return ((::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_MMNAGDNGJKL_OFFSET))(this, CENDLIKDNJA, NFDCFCBBLEF, GNBHIFFJNDJ);
		}

		static ::System::Void IMNCKPMMBLI(::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 PIBHDJBFAAJ, ::UnityEngine::Vector3 PLIKKJLOAJK, ::System::Single ODCFGECEOGA, ::System::Single KKIAHJODOIA, ::System::Single MDPPNMIPDMP)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_IMNCKPMMBLI_OFFSET))(AKAGDEFAGJA, PIBHDJBFAAJ, PLIKKJLOAJK, ODCFGECEOGA, KKIAHJODOIA, MDPPNMIPDMP);
		}

		::System::Single BGGKAOOGGCH(::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO CENDLIKDNJA, ::System::Single NKDHDAJFKCC, ::System::Single IAKPGBCAAKM, ::System::Single GCBHFANNDCD, ::System::Single& FNIOPKPHDEH)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_BGGKAOOGGCH_OFFSET))(this, CENDLIKDNJA, NKDHDAJFKCC, IAKPGBCAAKM, GCBHFANNDCD, FNIOPKPHDEH);
		}

		::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL KLMLAONPDOI(::System::Single NFDCFCBBLEF, ::System::Single GNBHIFFJNDJ)
		{
			return ((::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_KLMLAONPDOI_OFFSET))(this, NFDCFCBBLEF, GNBHIFFJNDJ);
		}

		::System::Boolean LMNGELHBBON(::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL& DJCNCELJPOM, ::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL& FENCLNENPFL)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL&, ::MoleMole::Config::ParabolaFunctor_JEOOFMIELEL&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_LMNGELHBBON_OFFSET))(this, DJCNCELJPOM, FENCLNENPFL);
		}

		::System::Single KNOHPFNLJGN(::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO CENDLIKDNJA, ::System::Single NFDCFCBBLEF, ::System::Single GNBHIFFJNDJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_PGHPCBGEGJO, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_KNOHPFNLJGN_OFFSET))(this, CENDLIKDNJA, NFDCFCBBLEF, GNBHIFFJNDJ);
		}

		::System::Single GJCCDHBMDLD(::System::Single DCKBFJGHBAI, ::System::Single GNBHIFFJNDJ, ::System::Boolean CGHFEJEBLHI, ::System::Single JPKEBDGEBPI)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GJCCDHBMDLD_OFFSET))(this, DCKBFJGHBAI, GNBHIFFJNDJ, CGHFEJEBLHI, JPKEBDGEBPI);
		}
	};
}
