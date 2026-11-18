#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGLMCEBOPBO.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/DNNGACIMEAM.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDKMNGJOHCJ_LMIMDFGGLPL_OFFSET UNITYSDK_OFFSET(0x17FAE6E0)
#define LDKMNGJOHCJ_OJPOLHCEAJK_OFFSET UNITYSDK_OFFSET(0x17FAEAB0)
#define LDKMNGJOHCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAE6D0)

inline static constexpr unsigned int LDKMNGJOHCJ_TypeDefinitionIndex = 10488;

class LDKMNGJOHCJ : public ::FGLMCEBOPBO
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* OLBNOACBGHK; // 0x78

	::System::Void _ctor(::DNNGACIMEAM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DNNGACIMEAM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LDKMNGJOHCJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LMIMDFGGLPL()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMNGJOHCJ_LMIMDFGGLPL_OFFSET))(this);
	}

	::System::Int32 OJPOLHCEAJK(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char> OGKEBCPEPED)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Char>))((::PBYTE)hIl2Cpp + LDKMNGJOHCJ_OJPOLHCEAJK_OFFSET))(this, OGKEBCPEPED);
	}
};
