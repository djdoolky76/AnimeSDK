#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KHGIADFIDBP___C_CBEEFHOJOOE_OFFSET UNITYSDK_OFFSET(0x13C600E0)
#define KHGIADFIDBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C60090)
#define KHGIADFIDBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C600D0)

inline static constexpr unsigned int KHGIADFIDBP___c_TypeDefinitionIndex = 71927;

class KHGIADFIDBP___c : public ::System::Object
{
public:
	static ::System::Func_2<::CALIGLPABNP*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::CALIGLPABNP*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KHGIADFIDBP___c_TypeDefinitionIndex)->GetStaticField(0x329A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KHGIADFIDBP___c_TypeDefinitionIndex)->GetStaticField(0x329A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGIADFIDBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGIADFIDBP___C__CTOR_OFFSET))(this);
	}

	::System::String* CBEEFHOJOOE(::CALIGLPABNP* LILKIGNNLAJ)
	{
		return ((::System::String*(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + KHGIADFIDBP___C_CBEEFHOJOOE_OFFSET))(this, LILKIGNNLAJ);
	}
};
