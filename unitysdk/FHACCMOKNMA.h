#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/System/Object.h"

class FHACCMOKNMA_LCBCNOOPNBJ;
class OFICDBEJFFD;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHACCMOKNMA_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x1618DC60)
#define FHACCMOKNMA_ICONPHLDHDH_OFFSET UNITYSDK_OFFSET(0x1618D620)
#define FHACCMOKNMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1618D5D0)

inline static constexpr unsigned int FHACCMOKNMA_TypeDefinitionIndex = 49998;

class FHACCMOKNMA : public ::System::Object
{
public:
	::OFICDBEJFFD* KCHDGHFEDNB; // 0x10
	::FHACCMOKNMA_LCBCNOOPNBJ* GENFONPJIFD; // 0x18

	::System::Void _ctor(::FHACCMOKNMA_LCBCNOOPNBJ* OHADKNNMKBO)
	{
		return ((::System::Void(*)(::PVOID, ::FHACCMOKNMA_LCBCNOOPNBJ*))((::PBYTE)hIl2Cpp + FHACCMOKNMA__CTOR_OFFSET))(this, OHADKNNMKBO);
	}

	::System::Void ICONPHLDHDH(::System::Collections::Generic::List_1<::System::Int32>* BADJIMECAGC, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>* MIJIBILCPKJ, ::NLLAEGMBGNN ILIOMLEHCEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>*, ::NLLAEGMBGNN))((::PBYTE)hIl2Cpp + FHACCMOKNMA_ICONPHLDHDH_OFFSET))(this, BADJIMECAGC, MIJIBILCPKJ, ILIOMLEHCEK);
	}

	::OFICDBEJFFD* GFBJLHMNBAD()
	{
		return ((::OFICDBEJFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHACCMOKNMA_GFBJLHMNBAD_OFFSET))(this);
	}
};
