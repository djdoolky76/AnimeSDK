#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MGAKDMCMHLL___C_JLNLJCACBOD_OFFSET UNITYSDK_OFFSET(0x17D21FE0)
#define MGAKDMCMHLL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D21F90)
#define MGAKDMCMHLL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D21FD0)

inline static constexpr unsigned int MGAKDMCMHLL___c_TypeDefinitionIndex = 49017;

class MGAKDMCMHLL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MGAKDMCMHLL___c_TypeDefinitionIndex)->GetStaticField(0x4E830);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__9_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MGAKDMCMHLL___c_TypeDefinitionIndex)->GetStaticField(0x4E838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGAKDMCMHLL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAKDMCMHLL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JLNLJCACBOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGAKDMCMHLL___C_JLNLJCACBOD_OFFSET))(this);
	}
};
