#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace MoleMole { class MonoEffectPluginDestroy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCFMHELLMAL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1997AA70)
#define LCFMHELLMAL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1997ABE0)
#define LCFMHELLMAL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1997AB50)
#define LCFMHELLMAL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1997A9A0)
#define LCFMHELLMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1997AAC0)
#define LCFMHELLMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1997AB40)

inline static constexpr unsigned int LCFMHELLMAL_TypeDefinitionIndex = 53481;

class LCFMHELLMAL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x6B; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* KFOOJBFKOGD; // 0x48
	::System::String* IPILLFPFJJF; // 0x50
	::MoleMole::MonoEffectPluginDestroy* LIAOGAIOAKC; // 0x58
	::System::Boolean JIPJAGOKBLO; // 0x60
	::System::Boolean BLMJMFBPBLN; // 0x61
	::System::Boolean NFEAABAFDOL; // 0x62
	::System::Boolean AFBJJOEHODH; // 0x63

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFMHELLMAL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFMHELLMAL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFMHELLMAL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFMHELLMAL_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFMHELLMAL_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::LCFMHELLMAL* JFDOOELFAOA()
	{
		return ((::LCFMHELLMAL*(*)())((::PBYTE)hIl2Cpp + LCFMHELLMAL_JFDOOELFAOA_OFFSET))();
	}
};
