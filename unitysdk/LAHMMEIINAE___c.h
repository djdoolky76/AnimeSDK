#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJOJGENLLMB;
namespace System { template <typename T> class Comparison_1; }

#define LAHMMEIINAE___C_KINIDKAIJML_OFFSET UNITYSDK_OFFSET(0x1B7EB440)
#define LAHMMEIINAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7EB3F0)
#define LAHMMEIINAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EB430)

inline static constexpr unsigned int LAHMMEIINAE___c_TypeDefinitionIndex = 13281;

class LAHMMEIINAE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LAHMMEIINAE___c_TypeDefinitionIndex)->GetStaticField(0x76C0);
	}
	static ::System::Comparison_1<::HJOJGENLLMB*>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::HJOJGENLLMB*>**)Il2CppClass::FromTypeDefinitionIndex(LAHMMEIINAE___c_TypeDefinitionIndex)->GetStaticField(0x76C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAHMMEIINAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHMMEIINAE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KINIDKAIJML(::HJOJGENLLMB* GLPHHDMCDDB, ::HJOJGENLLMB* HDLECGINJDM)
	{
		return ((::System::Int32(*)(::PVOID, ::HJOJGENLLMB*, ::HJOJGENLLMB*))((::PBYTE)hIl2Cpp + LAHMMEIINAE___C_KINIDKAIJML_OFFSET))(this, GLPHHDMCDDB, HDLECGINJDM);
	}
};
