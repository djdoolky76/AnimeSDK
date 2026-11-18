#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

class HDNLHPMDKPN_DNEFDIOPFKO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HDNLHPMDKPN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13D87D40)
#define HDNLHPMDKPN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13D88010)
#define HDNLHPMDKPN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13D87F80)
#define HDNLHPMDKPN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13D87BD0)
#define HDNLHPMDKPN__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D87D90)
#define HDNLHPMDKPN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D87E10)

inline static constexpr unsigned int HDNLHPMDKPN_TypeDefinitionIndex = 53826;

class HDNLHPMDKPN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x4F; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OOKMILGLBFI; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Int32>* OIODNNCCOCN; // 0x50
	::HDNLHPMDKPN_DNEFDIOPFKO* FOACJCAECOI; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LOKPDIPMJHH; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDNLHPMDKPN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNLHPMDKPN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::HDNLHPMDKPN* JFDOOELFAOA()
	{
		return ((::HDNLHPMDKPN*(*)())((::PBYTE)hIl2Cpp + HDNLHPMDKPN_JFDOOELFAOA_OFFSET))();
	}
};
