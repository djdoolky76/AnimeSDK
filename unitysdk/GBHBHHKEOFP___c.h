#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHIKLKPLCCG;
namespace System { template <typename T> class Action_1; }

#define GBHBHHKEOFP___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x179C7FA0)
#define GBHBHHKEOFP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C7F50)
#define GBHBHHKEOFP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179C7F90)

inline static constexpr unsigned int GBHBHHKEOFP___c_TypeDefinitionIndex = 77026;

class GBHBHHKEOFP___c : public ::System::Object
{
public:
	static ::System::Action_1<::DHIKLKPLCCG*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::DHIKLKPLCCG*>**)Il2CppClass::FromTypeDefinitionIndex(GBHBHHKEOFP___c_TypeDefinitionIndex)->GetStaticField(0x3DD00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GBHBHHKEOFP___c_TypeDefinitionIndex)->GetStaticField(0x3DD08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHBHHKEOFP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBHHKEOFP___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::DHIKLKPLCCG* KBNKIAPGFLH)
	{
		return ((::System::Void(*)(::PVOID, ::DHIKLKPLCCG*))((::PBYTE)hIl2Cpp + GBHBHHKEOFP___C_PLACCFJJGGK_OFFSET))(this, KBNKIAPGFLH);
	}
};
