#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define ILCNCODKHGL___C_JHFPNDONGLI_OFFSET UNITYSDK_OFFSET(0x160B2B80)
#define ILCNCODKHGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160B2B30)
#define ILCNCODKHGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160B2B70)

inline static constexpr unsigned int ILCNCODKHGL___c_TypeDefinitionIndex = 65911;

class ILCNCODKHGL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ILCNCODKHGL___c_TypeDefinitionIndex)->GetStaticField(0x3B3D0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__20_13()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ILCNCODKHGL___c_TypeDefinitionIndex)->GetStaticField(0x3B3D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCNCODKHGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCNCODKHGL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JHFPNDONGLI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCNCODKHGL___C_JHFPNDONGLI_OFFSET))(this);
	}
};
