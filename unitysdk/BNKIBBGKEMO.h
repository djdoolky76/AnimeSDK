#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class PKLAICEMAHO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNKIBBGKEMO_PIFMDLCBBAL_OFFSET UNITYSDK_OFFSET(0x128B5A90)
#define BNKIBBGKEMO__CTOR_OFFSET UNITYSDK_OFFSET(0x128B59D0)

inline static constexpr unsigned int BNKIBBGKEMO_TypeDefinitionIndex = 50467;

class BNKIBBGKEMO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PMKFJALGINP; // 0x10
	::PKLAICEMAHO* MIGAOFOKENO; // 0x18

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + BNKIBBGKEMO__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Void PIFMDLCBBAL(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BNKIBBGKEMO_PIFMDLCBBAL_OFFSET))(this, LADPIPOMBJM);
	}
};
