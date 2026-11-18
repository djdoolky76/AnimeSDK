#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIDPAPFBACC_PEMKCBJIKMO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define NKFGFCLFJPF___C_FINHJMPCMPD_OFFSET UNITYSDK_OFFSET(0x1CCEE0E0)
#define NKFGFCLFJPF___C_OALPLLPBFJI_OFFSET UNITYSDK_OFFSET(0x1CCEDFB0)
#define NKFGFCLFJPF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEDF60)
#define NKFGFCLFJPF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEDFA0)

inline static constexpr unsigned int NKFGFCLFJPF___c_TypeDefinitionIndex = 16723;

class NKFGFCLFJPF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NKFGFCLFJPF___c_TypeDefinitionIndex)->GetStaticField(0x7970);
	}
	static ::System::Converter_2<::System::String*, ::System::Object*>** StaticGet___9__22_0()
	{
		return (::System::Converter_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NKFGFCLFJPF___c_TypeDefinitionIndex)->GetStaticField(0x7978);
	}
	static ::System::Converter_2<::System::String*, ::System::Object*>** StaticGet___9__12_0()
	{
		return (::System::Converter_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NKFGFCLFJPF___c_TypeDefinitionIndex)->GetStaticField(0x7980);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKFGFCLFJPF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFGFCLFJPF___C__CTOR_OFFSET))(this);
	}

	::HIDPAPFBACC_PEMKCBJIKMO* OALPLLPBFJI(::System::String* LCEGOBBEECM)
	{
		return ((::HIDPAPFBACC_PEMKCBJIKMO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKFGFCLFJPF___C_OALPLLPBFJI_OFFSET))(this, LCEGOBBEECM);
	}

	::HIDPAPFBACC_PEMKCBJIKMO* FINHJMPCMPD(::System::String* LCEGOBBEECM)
	{
		return ((::HIDPAPFBACC_PEMKCBJIKMO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKFGFCLFJPF___C_FINHJMPCMPD_OFFSET))(this, LCEGOBBEECM);
	}
};
