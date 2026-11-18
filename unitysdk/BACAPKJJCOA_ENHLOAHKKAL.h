#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BACAPKJJCOA_MGCMPLFLBLD.h"
#include "unitysdk/FHAMBCIABAF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BACAPKJJCOA_ENHLOAHKKAL_IAAKLEHNDHA_OFFSET UNITYSDK_OFFSET(0x1FE14780)
#define BACAPKJJCOA_ENHLOAHKKAL_KDLBBNPBAOO_OFFSET UNITYSDK_OFFSET(0x1FE14770)
#define BACAPKJJCOA_ENHLOAHKKAL_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1FE153A0)
#define BACAPKJJCOA_ENHLOAHKKAL_NKFNIDPOMEJ_OFFSET UNITYSDK_OFFSET(0x1FE14640)
#define BACAPKJJCOA_ENHLOAHKKAL_NNDHEJBODHG_OFFSET UNITYSDK_OFFSET(0x1FE15390)
#define BACAPKJJCOA_ENHLOAHKKAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE145E0)

inline static constexpr unsigned int BACAPKJJCOA_ENHLOAHKKAL_TypeDefinitionIndex = 96495;

class BACAPKJJCOA_ENHLOAHKKAL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* JAJODKOHPGE; // 0x10
	::System::Action* OIMBJPLLIGN; // 0x18
	::System::Action* FHFBPDJJGBH; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* GJCFKLBPOHG; // 0x28
	::System::Int32 _EMOALAEMIJO_k__BackingField; // 0x30
	::System::Int32 JBMMGBOMDCO; // 0x34
	::UnityEngine::Vector3 CIBAJJBNLGM; // 0x38
	::FHAMBCIABAF PJEMEECKONE; // 0x44
	::BACAPKJJCOA_MGCMPLFLBLD OCOJFKMOKMK; // 0x4C
	::System::UInt32 BHMGHJNMBJE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA_ENHLOAHKKAL__CTOR_OFFSET))(this);
	}

	::System::Boolean NKFNIDPOMEJ(::System::UInt32 KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BACAPKJJCOA_ENHLOAHKKAL_NKFNIDPOMEJ_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Int32 KDLBBNPBAOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA_ENHLOAHKKAL_KDLBBNPBAOO_OFFSET))(this);
	}

	::System::Void IAAKLEHNDHA(::BACAPKJJCOA_MGCMPLFLBLD JBAAOKJHJMH)
	{
		return ((::System::Void(*)(::PVOID, ::BACAPKJJCOA_MGCMPLFLBLD))((::PBYTE)hIl2Cpp + BACAPKJJCOA_ENHLOAHKKAL_IAAKLEHNDHA_OFFSET))(this, JBAAOKJHJMH);
	}

	::System::Void NNDHEJBODHG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BACAPKJJCOA_ENHLOAHKKAL_NNDHEJBODHG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA_ENHLOAHKKAL_KMMIPNMJILI_OFFSET))(this);
	}
};
