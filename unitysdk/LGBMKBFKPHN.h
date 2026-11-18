#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_CBBABPIPFNM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGBMKBFKPHN_OLAHNMIPNEC_OFFSET UNITYSDK_OFFSET(0x168469B0)
#define LGBMKBFKPHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16846910)

inline static constexpr unsigned int LGBMKBFKPHN_TypeDefinitionIndex = 40403;

class LGBMKBFKPHN : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>** StaticGet_EJOICIJJGDF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LGBMKBFKPHN_TypeDefinitionIndex)->GetStaticField(0x48470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGBMKBFKPHN__CCTOR_OFFSET))();
	}

	static ::System::String* OLAHNMIPNEC(::CLFBLCIJPKD_CBBABPIPFNM MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::CLFBLCIJPKD_CBBABPIPFNM))((::PBYTE)hIl2Cpp + LGBMKBFKPHN_OLAHNMIPNEC_OFFSET))(MCOHLHMKLIP);
	}
};
