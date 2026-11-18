#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define FCHGFBFGMFM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10F5DF00)
#define FCHGFBFGMFM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10F5E170)
#define FCHGFBFGMFM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10F5E0E0)
#define FCHGFBFGMFM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10F5DDF0)
#define FCHGFBFGMFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F5DF50)
#define FCHGFBFGMFM__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5DFD0)

inline static constexpr unsigned int FCHGFBFGMFM_TypeDefinitionIndex = 75239;

class FCHGFBFGMFM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x77; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DPIDMPMOAEM; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::System::UInt32>*>* HDOECBACJIA; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHGFBFGMFM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHGFBFGMFM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHGFBFGMFM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHGFBFGMFM_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHGFBFGMFM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FCHGFBFGMFM* JFDOOELFAOA()
	{
		return ((::FCHGFBFGMFM*(*)())((::PBYTE)hIl2Cpp + FCHGFBFGMFM_JFDOOELFAOA_OFFSET))();
	}
};
