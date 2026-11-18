#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LJEBIAMJLHA___C_KHOOBKOPCJK_OFFSET UNITYSDK_OFFSET(0x13CF2070)
#define LJEBIAMJLHA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CF2020)
#define LJEBIAMJLHA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF2060)

inline static constexpr unsigned int LJEBIAMJLHA___c_TypeDefinitionIndex = 45301;

class LJEBIAMJLHA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJEBIAMJLHA___c_TypeDefinitionIndex)->GetStaticField(0x4A250);
	}
	static ::System::Action** StaticGet___9__3_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LJEBIAMJLHA___c_TypeDefinitionIndex)->GetStaticField(0x4A258);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEBIAMJLHA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBIAMJLHA___C__CTOR_OFFSET))(this);
	}

	::System::Void KHOOBKOPCJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBIAMJLHA___C_KHOOBKOPCJK_OFFSET))(this);
	}
};
