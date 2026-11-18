#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LDFJHGMLFHC___C_MDNPIGBDLAB_OFFSET UNITYSDK_OFFSET(0x126CD490)
#define LDFJHGMLFHC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x126CD440)
#define LDFJHGMLFHC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126CD480)

inline static constexpr unsigned int LDFJHGMLFHC___c_TypeDefinitionIndex = 69626;

class LDFJHGMLFHC___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LDFJHGMLFHC___c_TypeDefinitionIndex)->GetStaticField(0x3B940);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDFJHGMLFHC___c_TypeDefinitionIndex)->GetStaticField(0x3B948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFJHGMLFHC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJHGMLFHC___C__CTOR_OFFSET))(this);
	}

	::System::String* MDNPIGBDLAB(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> DLBHJOGKNOC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + LDFJHGMLFHC___C_MDNPIGBDLAB_OFFSET))(this, DLBHJOGKNOC);
	}
};
