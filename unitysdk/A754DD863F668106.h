#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF5FBA80BA4AF1CC/FBFC1B9063724CA9.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A754DD863F668106_EB92A6A63CC7A0C2_OFFSET UNITYSDK_OFFSET(0x3ED07C0)
#define A754DD863F668106__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ED0980)

inline static constexpr unsigned int A754DD863F668106_TypeDefinitionIndex = 15097;

class A754DD863F668106 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_E93A2AE0B8C59453()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A754DD863F668106_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* EB92A6A63CC7A0C2(::AF5FBA80BA4AF1CC::FBFC1B9063724CA9 E1C9D5D57F5AB79E)
	{
		return ((::System::String*(*)(::AF5FBA80BA4AF1CC::FBFC1B9063724CA9))((::PBYTE)hIl2Cpp + A754DD863F668106_EB92A6A63CC7A0C2_OFFSET))(E1C9D5D57F5AB79E);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A754DD863F668106__CCTOR_OFFSET))();
	}
};
