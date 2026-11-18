#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJOKDGFPEJA.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKGAACKPMNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A84B00)
#define JKGAACKPMNB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A84AF0)

inline static constexpr unsigned int JKGAACKPMNB_TypeDefinitionIndex = 67907;

class JKGAACKPMNB : public ::System::Object
{
public:
	static ::JKGAACKPMNB** StaticGet_DDGNFJDLOKA()
	{
		return (::JKGAACKPMNB**)Il2CppClass::FromTypeDefinitionIndex(JKGAACKPMNB_TypeDefinitionIndex)->GetStaticField(0x4FA80);
	}
	::System::Collections::Generic::List_1<::HJOKDGFPEJA>* HENOIMEANMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGAACKPMNB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKGAACKPMNB__CCTOR_OFFSET))();
	}
};
