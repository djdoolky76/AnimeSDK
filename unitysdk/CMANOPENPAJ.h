#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJKNADJCGJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMANOPENPAJ_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x193E7D30)
#define CMANOPENPAJ_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x193E7F30)
#define CMANOPENPAJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x193E7EC0)
#define CMANOPENPAJ_OAIDALAOKAI_OFFSET UNITYSDK_OFFSET(0x193E7FC0)
#define CMANOPENPAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x193E7CD0)

inline static constexpr unsigned int CMANOPENPAJ_TypeDefinitionIndex = 49809;

class CMANOPENPAJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BIJKNADJCGJ>* HGIAHLIIMNJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMANOPENPAJ__CTOR_OFFSET))(this);
	}

	::System::Void IGJIGJCLNKJ(::System::Collections::Generic::IList_1<::DPKOIBEFPAO>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::DPKOIBEFPAO>*))((::PBYTE)hIl2Cpp + CMANOPENPAJ_IGJIGJCLNKJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMANOPENPAJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::BIJKNADJCGJ EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::BIJKNADJCGJ))((::PBYTE)hIl2Cpp + CMANOPENPAJ_KDGMEFEJMGJ_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void OAIDALAOKAI(::BIJKNADJCGJ EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::BIJKNADJCGJ))((::PBYTE)hIl2Cpp + CMANOPENPAJ_OAIDALAOKAI_OFFSET))(this, EJGDHCIBCJH);
	}
};
