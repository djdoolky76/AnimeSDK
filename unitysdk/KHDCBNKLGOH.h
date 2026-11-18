#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class TgsPvLegIkController; }
namespace RootMotion { class SolverManager_PostLateUpdateDelegate; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class Grounder_GrounderDelegate; }
namespace RootMotion::FinalIK { class LegIK; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHDCBNKLGOH_ENIJHLFFEKG_OFFSET UNITYSDK_OFFSET(0x16802F50)
#define KHDCBNKLGOH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16802E00)
#define KHDCBNKLGOH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16804180)
#define KHDCBNKLGOH_JHJFNIMKMDP_OFFSET UNITYSDK_OFFSET(0x16804250)
#define KHDCBNKLGOH_LGGMEODDJMA_OFFSET UNITYSDK_OFFSET(0x16804520)
#define KHDCBNKLGOH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x168046E0)
#define KHDCBNKLGOH_OFBDHDDKAIH_OFFSET UNITYSDK_OFFSET(0x168031C0)
#define KHDCBNKLGOH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16802B50)
#define KHDCBNKLGOH_PMHECLBNDHL_OFFSET UNITYSDK_OFFSET(0x168039C0)
#define KHDCBNKLGOH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16802E50)
#define KHDCBNKLGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x16802EE0)

inline static constexpr unsigned int KHDCBNKLGOH_TypeDefinitionIndex = 52582;

class KHDCBNKLGOH : public ::MJHDNMKGLBJ
{
public:
	static ::System::Single* StaticGet_MBIILBHFMLJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KHDCBNKLGOH_TypeDefinitionIndex)->GetStaticField(0x10A00);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x1E; // 0x0
	::MoleMole::TgsPvLegIkController* NFIENBHILDM; // 0x48
	::Il2CppArray<::RootMotion::FinalIK::LegIK*>* ANMJCAEMOID; // 0x50
	::System::Action* NGCPPDKODPM; // 0x58
	::Il2CppArray<::System::Boolean>* JKMCIBECNLK; // 0x60
	::RootMotion::SolverManager_PostLateUpdateDelegate* FFEPPKPGJGJ; // 0x68
	::RootMotion::FinalIK::Grounder_GrounderDelegate* BEOFPNCNEJD; // 0x70
	::System::Action* NOIGJNCELCN; // 0x78
	::System::Collections::Generic::List_1<::System::Boolean>* PBCNIFDJHDF; // 0x80
	::RootMotion::FinalIK::GrounderIK* DHCIJMAHADA; // 0x88
	::System::Single MODKAPPFFGI; // 0x90
	::System::Int32 NIJLCMKFAMB; // 0x94

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHDCBNKLGOH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean ENIJHLFFEKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_ENIJHLFFEKG_OFFSET))(this);
	}

	::System::Single OFBDHDDKAIH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_OFBDHDDKAIH_OFFSET))(this);
	}

	::System::Boolean PMHECLBNDHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_PMHECLBNDHL_OFFSET))(this);
	}

	static ::KHDCBNKLGOH* JFDOOELFAOA()
	{
		return ((::KHDCBNKLGOH*(*)())((::PBYTE)hIl2Cpp + KHDCBNKLGOH_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean JHJFNIMKMDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_JHJFNIMKMDP_OFFSET))(this);
	}

	::System::Boolean LGGMEODDJMA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_LGGMEODDJMA_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDCBNKLGOH_MEFBHFEOKGH_OFFSET))(this);
	}
};
