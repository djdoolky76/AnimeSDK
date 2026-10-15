#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TargetingMode.h"
class BACCOPOCMPC;
class DEEGAJPPPBG;
class EAHGHBMGCJE;
class OADJKHNPOLH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }

#define EFHJJIGLPDL_AMFADNLDBAD_OFFSET UNITYSDK_OFFSET(0x13A4D0E0)
#define EFHJJIGLPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4C230)
#define EFHJJIGLPDL_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0x13A4C530)
#define EFHJJIGLPDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4C330)
#define EFHJJIGLPDL_EEPJPMCKGAK_OFFSET UNITYSDK_OFFSET(0x13A4C690)
#define EFHJJIGLPDL_GMNPNCILIEC_OFFSET UNITYSDK_OFFSET(0x13A4CDE0)
#define EFHJJIGLPDL_IBOADIPPIME_OFFSET UNITYSDK_OFFSET(0x13A4CEA0)
#define EFHJJIGLPDL_INJBLNIHJPK_OFFSET UNITYSDK_OFFSET(0x13A4CEB0)
#define EFHJJIGLPDL_JCBGHODKBDC_OFFSET UNITYSDK_OFFSET(0x13A4CCC0)
#define EFHJJIGLPDL_KBCIFPEFBIO_OFFSET UNITYSDK_OFFSET(0x13A4C420)
#define EFHJJIGLPDL_LHNCBKGDPKL_OFFSET UNITYSDK_OFFSET(0x13A4CF50)
#define EFHJJIGLPDL_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x13A4C270)
#define EFHJJIGLPDL_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0x13A4C4F0)
#define EFHJJIGLPDL_NJLALKMJGNP_OFFSET UNITYSDK_OFFSET(0x13A4CCE0)
#define EFHJJIGLPDL_NPNBCFIAGKC_OFFSET UNITYSDK_OFFSET(0x13A4C380)
#define EFHJJIGLPDL_OGBNAKPMKFC_OFFSET UNITYSDK_OFFSET(0x13A4CD40)
#define EFHJJIGLPDL_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13A4C470)
#define EFHJJIGLPDL_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13A4C4B0)
#define EFHJJIGLPDL_PKOIBHJEMOO_OFFSET UNITYSDK_OFFSET(0x13A4CD90)
#define EFHJJIGLPDL_TICK_OFFSET UNITYSDK_OFFSET(0x13A4C570)

inline static constexpr unsigned int EFHJJIGLPDL_TypeDefinitionIndex = 57465;

	class EFHJJIGLPDL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::OADJKHNPOLH* PIJPEKHJHHI; // 0x18
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x20
		::OADJKHNPOLH* JHIHGGIHCLD; // 0x28
		::DEEGAJPPPBG* FAOEOJJKLLB; // 0x30
		::EAHGHBMGCJE* PGMBFHNLPNF; // 0x38
		::RPG::GameCore::GameEntity* PAKNEPALMLB; // 0x40
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x48
		::BACCOPOCMPC* NILDKJKBHHG; // 0x50
		::System::Boolean MHEAIOMEGCA; // 0x58
		::System::Boolean HHBOKPNACHE; // 0x59
		::System::Boolean LHMNKBAOKIN; // 0x5A
		::System::Byte _padding0[0x1];
		::System::Single IPCJOAPDIHN; // 0x5C
		::RPG::GameCore::TargetingMode BHJDJDPLCLP; // 0x60
		::System::Single DDNOLBBFKMA; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::TransformComponent* a1, ::DEEGAJPPPBG* a2, ::RPG::GameCore::NPCComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::DEEGAJPPPBG*, ::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_DISPOSE_OFFSET))(this);
		}

		::System::Void NPNBCFIAGKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_NPNBCFIAGKC_OFFSET))(this, a1);
		}

		::System::Void KBCIFPEFBIO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_KBCIFPEFBIO_OFFSET))(this, a1);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_MOKNCFJICIC_OFFSET))(this);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_TICK_OFFSET))(this, a1);
		}

		::System::Void OGBNAKPMKFC(::RPG::GameCore::TargetingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetingMode))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_OGBNAKPMKFC_OFFSET))(this, a1);
		}

		::System::Void PKOIBHJEMOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_PKOIBHJEMOO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JCBGHODKBDC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_JCBGHODKBDC_OFFSET))(this);
		}

		::System::Void GMNPNCILIEC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_GMNPNCILIEC_OFFSET))(this, a1);
		}

		::OADJKHNPOLH* IBOADIPPIME()
		{
			return ((::OADJKHNPOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_IBOADIPPIME_OFFSET))(this);
		}

		::System::Boolean INJBLNIHJPK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_INJBLNIHJPK_OFFSET))(this, a1);
		}

		::System::Boolean LHNCBKGDPKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_LHNCBKGDPKL_OFFSET))(this);
		}

		::System::Void EEPJPMCKGAK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_EEPJPMCKGAK_OFFSET))(this, a1);
		}

		::System::Boolean AMFADNLDBAD(::OADJKHNPOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OADJKHNPOLH*))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_AMFADNLDBAD_OFFSET))(this, a1);
		}

		::System::Void NJLALKMJGNP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFHJJIGLPDL_NJLALKMJGNP_OFFSET))(this, a1);
		}

	};
