#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PBIJEADFPLA___C_MCIIPEDMDGF_OFFSET UNITYSDK_OFFSET(0x1552C570)
#define PBIJEADFPLA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1552C520)
#define PBIJEADFPLA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1552C560)

inline static constexpr unsigned int PBIJEADFPLA___c_TypeDefinitionIndex = 63170;

class PBIJEADFPLA___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PBIJEADFPLA___c_TypeDefinitionIndex)->GetStaticField(0x492F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBIJEADFPLA___c_TypeDefinitionIndex)->GetStaticField(0x492F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBIJEADFPLA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIJEADFPLA___C__CTOR_OFFSET))(this);
	}

	::System::Void MCIIPEDMDGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIJEADFPLA___C_MCIIPEDMDGF_OFFSET))(this);
	}
};
