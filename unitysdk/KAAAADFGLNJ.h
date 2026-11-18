#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAAAADFGLNJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1947C2B0)
#define KAAAADFGLNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C2A0)

inline static constexpr unsigned int KAAAADFGLNJ_TypeDefinitionIndex = 76637;

class KAAAADFGLNJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MIKOMFIBMBN>** StaticGet_AEPCDNMMFJJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MIKOMFIBMBN>**)Il2CppClass::FromTypeDefinitionIndex(KAAAADFGLNJ_TypeDefinitionIndex)->GetStaticField(0x38110);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAAADFGLNJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAAAADFGLNJ__CCTOR_OFFSET))();
	}
};
