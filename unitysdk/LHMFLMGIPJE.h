#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueTuple_2.h"

class BDLOHNNBJPJ_FFIPKFIMNIB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHMFLMGIPJE_DPAGLHNJMPK_OFFSET UNITYSDK_OFFSET(0xD42DE00)
#define LHMFLMGIPJE_LJJLPOADMDG_OFFSET UNITYSDK_OFFSET(0xD42DFF0)
#define LHMFLMGIPJE__CTOR_OFFSET UNITYSDK_OFFSET(0xD42DD10)

inline static constexpr unsigned int LHMFLMGIPJE_TypeDefinitionIndex = 85609;

class LHMFLMGIPJE : public ::System::Object
{
public:
	::HOCDHMEPPEG LNCHANEOIHB; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Object*>* GLCOCNJJLKK; // 0x40

	::System::Void _ctor(::HOCDHMEPPEG KMKKPFNLOIL)
	{
		return ((::System::Void(*)(::PVOID, ::HOCDHMEPPEG))((::PBYTE)hIl2Cpp + LHMFLMGIPJE__CTOR_OFFSET))(this, KMKKPFNLOIL);
	}

	::System::Void DPAGLHNJMPK(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32>>* IOLKJBHJLCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32>>*))((::PBYTE)hIl2Cpp + LHMFLMGIPJE_DPAGLHNJMPK_OFFSET))(this, IOLKJBHJLCD);
	}

	::System::Void LJJLPOADMDG(::BDLOHNNBJPJ_FFIPKFIMNIB* LMHNJIBCLJF)
	{
		return ((::System::Void(*)(::PVOID, ::BDLOHNNBJPJ_FFIPKFIMNIB*))((::PBYTE)hIl2Cpp + LHMFLMGIPJE_LJJLPOADMDG_OFFSET))(this, LMHNJIBCLJF);
	}
};
