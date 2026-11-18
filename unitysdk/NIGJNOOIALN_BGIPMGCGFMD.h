#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIKBNICCMDG;
class NIGJNOOIALN_ANEANLDGGGM;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define NIGJNOOIALN_BGIPMGCGFMD_CBFGNBMGNJF_OFFSET UNITYSDK_OFFSET(0x17290B60)
#define NIGJNOOIALN_BGIPMGCGFMD_EAFALMMFPCA_OFFSET UNITYSDK_OFFSET(0x17290F50)
#define NIGJNOOIALN_BGIPMGCGFMD_IONPNKJJLII_OFFSET UNITYSDK_OFFSET(0x17290E20)
#define NIGJNOOIALN_BGIPMGCGFMD_JPCKKGAFOCG_OFFSET UNITYSDK_OFFSET(0x17290770)
#define NIGJNOOIALN_BGIPMGCGFMD_KHMHDGHPCKE_OFFSET UNITYSDK_OFFSET(0x1728FFA0)
#define NIGJNOOIALN_BGIPMGCGFMD_MEDHMOPLLNE_OFFSET UNITYSDK_OFFSET(0x172908A0)
#define NIGJNOOIALN_BGIPMGCGFMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1728FF90)

inline static constexpr unsigned int NIGJNOOIALN_BGIPMGCGFMD_TypeDefinitionIndex = 87468;

class NIGJNOOIALN_BGIPMGCGFMD : public ::System::Object
{
public:
	::NIGJNOOIALN_ANEANLDGGGM* FGBNBFHOKAA; // 0x10
	::KIKBNICCMDG* LAMKGIKIHCF; // 0x18
	::System::Action* AEPKIFBFCOD; // 0x20
	::System::Action* AABKICOMIDA; // 0x28
	::System::Action_1<::System::Int32>* MNMDKBDFAFE; // 0x30
	::System::Action_1<::System::Int32>* HOMJMCDKGON; // 0x38
	::System::Action* DDHHMKBONHH; // 0x40
	::System::Action* OLDCEOGKOAE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD__CTOR_OFFSET))(this);
	}

	::System::Void KHMHDGHPCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD_KHMHDGHPCKE_OFFSET))(this);
	}

	::System::Void JPCKKGAFOCG(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD_JPCKKGAFOCG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MEDHMOPLLNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD_MEDHMOPLLNE_OFFSET))(this);
	}

	::System::Void CBFGNBMGNJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD_CBFGNBMGNJF_OFFSET))(this);
	}

	::System::Void IONPNKJJLII(::System::Int32 NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD_IONPNKJJLII_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void EAFALMMFPCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_BGIPMGCGFMD_EAFALMMFPCA_OFFSET))(this);
	}
};
