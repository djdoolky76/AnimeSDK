#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EDKFFMCGPCC___C_APHAKJPHHID_OFFSET UNITYSDK_OFFSET(0x10F20FB0)
#define EDKFFMCGPCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F20F60)
#define EDKFFMCGPCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F20FA0)

inline static constexpr unsigned int EDKFFMCGPCC___c_TypeDefinitionIndex = 47934;

class EDKFFMCGPCC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EDKFFMCGPCC___c_TypeDefinitionIndex)->GetStaticField(0x3DA10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EDKFFMCGPCC___c_TypeDefinitionIndex)->GetStaticField(0x3DA18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDKFFMCGPCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKFFMCGPCC___C__CTOR_OFFSET))(this);
	}

	::System::Void APHAKJPHHID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKFFMCGPCC___C_APHAKJPHHID_OFFSET))(this);
	}
};
