#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MINFFNHBJBP___C_AGOGEDAMAAH_OFFSET UNITYSDK_OFFSET(0x151D64E0)
#define MINFFNHBJBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151D6490)
#define MINFFNHBJBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151D64D0)

inline static constexpr unsigned int MINFFNHBJBP___c_TypeDefinitionIndex = 79829;

class MINFFNHBJBP___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MINFFNHBJBP___c_TypeDefinitionIndex)->GetStaticField(0x38620);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MINFFNHBJBP___c_TypeDefinitionIndex)->GetStaticField(0x38628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MINFFNHBJBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP___C__CTOR_OFFSET))(this);
	}

	::System::Void AGOGEDAMAAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFFNHBJBP___C_AGOGEDAMAAH_OFFSET))(this);
	}
};
