#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMLLGKLKDCK_ACBGPILEPBK.h"
#include "unitysdk/DODLMCJGDOM.h"
#include "unitysdk/NNIMDDHOPMO.h"
#include "unitysdk/OFCHEAEHJEF.h"
#include "unitysdk/System/Object.h"

class DMLLGKLKDCK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOFADKCBAEC_AFDCPKBACCL_OFFSET UNITYSDK_OFFSET(0x157D4620)
#define JOFADKCBAEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D4580)
#define JOFADKCBAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4470)

inline static constexpr unsigned int JOFADKCBAEC_TypeDefinitionIndex = 46669;

class JOFADKCBAEC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::JOFADKCBAEC*>** StaticGet_BOLADNOIONK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::JOFADKCBAEC*>**)Il2CppClass::FromTypeDefinitionIndex(JOFADKCBAEC_TypeDefinitionIndex)->GetStaticField(0x51540);
	}
	::OFCHEAEHJEF CJANEABKMCE; // 0x10
	::DODLMCJGDOM LDOELJNMDDP; // 0x1C
	::NNIMDDHOPMO DDGNFJDLOKA; // 0x28
	::DMLLGKLKDCK_ACBGPILEPBK JMJHKMEMHDB; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFADKCBAEC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFADKCBAEC__CCTOR_OFFSET))();
	}

	::DMLLGKLKDCK* AFDCPKBACCL()
	{
		return ((::DMLLGKLKDCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFADKCBAEC_AFDCPKBACCL_OFFSET))(this);
	}
};
