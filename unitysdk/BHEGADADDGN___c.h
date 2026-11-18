#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define BHEGADADDGN___C_JAJMKNPMEIF_OFFSET UNITYSDK_OFFSET(0x1867A200)
#define BHEGADADDGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1867A1B0)
#define BHEGADADDGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1867A1F0)

inline static constexpr unsigned int BHEGADADDGN___c_TypeDefinitionIndex = 54727;

class BHEGADADDGN___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__42_0()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(BHEGADADDGN___c_TypeDefinitionIndex)->GetStaticField(0x4B4A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BHEGADADDGN___c_TypeDefinitionIndex)->GetStaticField(0x4B4A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHEGADADDGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEGADADDGN___C__CTOR_OFFSET))(this);
	}

	::System::Void JAJMKNPMEIF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BHEGADADDGN___C_JAJMKNPMEIF_OFFSET))(this, KOIBHLHLMFC);
	}
};
