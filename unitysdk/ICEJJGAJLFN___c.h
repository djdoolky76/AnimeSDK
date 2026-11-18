#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define ICEJJGAJLFN___C_PGGFMOLHMNP_OFFSET UNITYSDK_OFFSET(0x1609B820)
#define ICEJJGAJLFN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1609B7D0)
#define ICEJJGAJLFN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1609B810)

inline static constexpr unsigned int ICEJJGAJLFN___c_TypeDefinitionIndex = 45296;

class ICEJJGAJLFN___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ICEJJGAJLFN___c_TypeDefinitionIndex)->GetStaticField(0x3B230);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ICEJJGAJLFN___c_TypeDefinitionIndex)->GetStaticField(0x3B238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICEJJGAJLFN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEJJGAJLFN___C__CTOR_OFFSET))(this);
	}

	::System::Void PGGFMOLHMNP(::System::Boolean HOGLEMKKBEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICEJJGAJLFN___C_PGGFMOLHMNP_OFFSET))(this, HOGLEMKKBEB);
	}
};
