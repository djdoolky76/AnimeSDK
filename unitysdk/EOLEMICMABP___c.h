#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EOLEMICMABP___C_OLGIBCCEBPB_OFFSET UNITYSDK_OFFSET(0x10F4CCB0)
#define EOLEMICMABP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F4CC60)
#define EOLEMICMABP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4CCA0)

inline static constexpr unsigned int EOLEMICMABP___c_TypeDefinitionIndex = 61519;

class EOLEMICMABP___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__12_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EOLEMICMABP___c_TypeDefinitionIndex)->GetStaticField(0x3DAB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EOLEMICMABP___c_TypeDefinitionIndex)->GetStaticField(0x3DAB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOLEMICMABP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLEMICMABP___C__CTOR_OFFSET))(this);
	}

	::System::Void OLGIBCCEBPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLEMICMABP___C_OLGIBCCEBPB_OFFSET))(this);
	}
};
