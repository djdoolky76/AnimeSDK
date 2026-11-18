#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJEABDMMNHK_IMPCPDPANPK.h"
#include "unitysdk/Foundation/FTuple_1.h"
#include "unitysdk/IJEABDMMNHK_FIANMFIIBPE.h"

class IJEABDMMNHK;
class IJEABDMMNHK_DMIDEAMJLEP;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJEABDMMNHK_NNJGDIPMMLL_LBNAMNHJDBC_OFFSET UNITYSDK_OFFSET(0x141EFDC0)
#define IJEABDMMNHK_NNJGDIPMMLL_MOCEAALKALK_OFFSET UNITYSDK_OFFSET(0x141EFBC0)
#define IJEABDMMNHK_NNJGDIPMMLL__CTOR_OFFSET UNITYSDK_OFFSET(0x141EFB30)

inline static constexpr unsigned int IJEABDMMNHK_NNJGDIPMMLL_TypeDefinitionIndex = 68589;

class IJEABDMMNHK_NNJGDIPMMLL : public ::IJEABDMMNHK_IMPCPDPANPK
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FKJHMMOHPMI; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* BMPEBMLDHOA; // 0x28

	::System::Void _ctor(::IJEABDMMNHK_FIANMFIIBPE LJBPECKCCEA, ::System::Collections::Generic::List_1<::System::Int32>* GFHGAECKOJK)
	{
		return ((::System::Void(*)(::PVOID, ::IJEABDMMNHK_FIANMFIIBPE, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + IJEABDMMNHK_NNJGDIPMMLL__CTOR_OFFSET))(this, LJBPECKCCEA, GFHGAECKOJK);
	}

	::System::Void MOCEAALKALK(::IJEABDMMNHK_DMIDEAMJLEP* CAAFEGLOALC, ::Foundation::FTuple_1<::IJEABDMMNHK*>& MNABHBDEBPH)
	{
		return ((::System::Void(*)(::PVOID, ::IJEABDMMNHK_DMIDEAMJLEP*, ::Foundation::FTuple_1<::IJEABDMMNHK*>&))((::PBYTE)hIl2Cpp + IJEABDMMNHK_NNJGDIPMMLL_MOCEAALKALK_OFFSET))(this, CAAFEGLOALC, MNABHBDEBPH);
	}

	::System::Void LBNAMNHJDBC(::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJEABDMMNHK_NNJGDIPMMLL_LBNAMNHJDBC_OFFSET))(this, HKHHHJHCGKL);
	}
};
