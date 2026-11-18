#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define JAEDIBCNLJH___C_DGODAMAAMCF_OFFSET UNITYSDK_OFFSET(0x19891110)
#define JAEDIBCNLJH___C_HOJEHIPIELE_OFFSET UNITYSDK_OFFSET(0x19891000)
#define JAEDIBCNLJH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19890FB0)
#define JAEDIBCNLJH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19890FF0)

inline static constexpr unsigned int JAEDIBCNLJH___c_TypeDefinitionIndex = 89690;

class JAEDIBCNLJH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JAEDIBCNLJH___c_TypeDefinitionIndex)->GetStaticField(0x4D390);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__2_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(JAEDIBCNLJH___c_TypeDefinitionIndex)->GetStaticField(0x4D398);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JAEDIBCNLJH___c_TypeDefinitionIndex)->GetStaticField(0x4D3A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAEDIBCNLJH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH___C__CTOR_OFFSET))(this);
	}

	::System::String* HOJEHIPIELE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH___C_HOJEHIPIELE_OFFSET))(this);
	}

	::System::Void DGODAMAAMCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH___C_DGODAMAAMCF_OFFSET))(this);
	}
};
