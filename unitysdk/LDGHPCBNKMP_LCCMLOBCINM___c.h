#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDGHPCBNKMP_EMEJFLIFJAG.h"

namespace System { template <typename T> class Predicate_1; }

#define LDGHPCBNKMP_LCCMLOBCINM___C_BPDBNPMIAHB_OFFSET UNITYSDK_OFFSET(0x1A2EDB80)
#define LDGHPCBNKMP_LCCMLOBCINM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDB30)
#define LDGHPCBNKMP_LCCMLOBCINM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDB70)

inline static constexpr unsigned int LDGHPCBNKMP_LCCMLOBCINM___c_TypeDefinitionIndex = 72771;

class LDGHPCBNKMP_LCCMLOBCINM___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::System::Object*>** StaticGet___9__27_0()
	{
		return (::System::Predicate_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LDGHPCBNKMP_LCCMLOBCINM___c_TypeDefinitionIndex)->GetStaticField(0x3B950);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDGHPCBNKMP_LCCMLOBCINM___c_TypeDefinitionIndex)->GetStaticField(0x3B958);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDGHPCBNKMP_LCCMLOBCINM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_LCCMLOBCINM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BPDBNPMIAHB(::LDGHPCBNKMP_EMEJFLIFJAG JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::LDGHPCBNKMP_EMEJFLIFJAG))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_LCCMLOBCINM___C_BPDBNPMIAHB_OFFSET))(this, JNDDJMAHNAI);
	}
};
