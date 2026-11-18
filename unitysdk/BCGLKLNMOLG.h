#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCGLKLNMOLG_ANHLPFPDGFI.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class IADDHANFKPG;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BCGLKLNMOLG_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x13612660)
#define BCGLKLNMOLG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x136123E0)
#define BCGLKLNMOLG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x136124C0)
#define BCGLKLNMOLG_KGPEHOMOFCJ_OFFSET UNITYSDK_OFFSET(0x136125D0)
#define BCGLKLNMOLG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13612540)
#define BCGLKLNMOLG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13611EB0)
#define BCGLKLNMOLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13612430)
#define BCGLKLNMOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x136124B0)

inline static constexpr unsigned int BCGLKLNMOLG_TypeDefinitionIndex = 82084;

class BCGLKLNMOLG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA3; // 0x0
	::System::Action_1<::BCGLKLNMOLG*>* FAKIEDNBEJF; // 0x48
	::System::Collections::Generic::List_1<::IADDHANFKPG*>* MCAMBMDDENF; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IADDHANFKPG*>* JIFEGHHKHBE; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LELNBGCCOIH; // 0x60
	::UnityEngine::GameObject* PINMIEMJFLE; // 0x68
	::System::Collections::Generic::HashSet_1<::System::Int32>* EJMBDFFCAHO; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* HLDBJGAOKHH; // 0x78
	::System::Boolean NPAEAMOPPJE; // 0x80
	::System::Boolean IEJOCGIMAFN; // 0x81
	::System::Byte _padding0[0x2];
	::BCGLKLNMOLG_ANHLPFPDGFI JAIHBOCIPCM; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCGLKLNMOLG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLKLNMOLG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLKLNMOLG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLKLNMOLG_GETCLASSID_OFFSET))(this);
	}

	static ::BCGLKLNMOLG* JFDOOELFAOA()
	{
		return ((::BCGLKLNMOLG*(*)())((::PBYTE)hIl2Cpp + BCGLKLNMOLG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGLKLNMOLG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Int32 KGPEHOMOFCJ(::System::Int32 MKDDDNBNCGB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCGLKLNMOLG_KGPEHOMOFCJ_OFFSET))(this, MKDDDNBNCGB);
	}

	::System::Void GALGFCPKMGC(::System::Collections::Generic::List_1<::System::Int32>* NPGNJCNNECK, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LNIDMABKFOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + BCGLKLNMOLG_GALGFCPKMGC_OFFSET))(this, NPGNJCNNECK, LNIDMABKFOE);
	}
};
