#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"

class F7F97A0BCB155C0E_A527EE0EF09ADE12;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }
template <typename T> class FCECB52A00C1344E;

#define F7F97A0BCB155C0E_AB1F141460C6D62F_OFFSET UNITYSDK_OFFSET(0x2A340E0)
#define F7F97A0BCB155C0E_B9E7ADAF23F19159_OFFSET UNITYSDK_OFFSET(0x2A33D70)
#define F7F97A0BCB155C0E_E26DE9EDA59B7DB1_OFFSET UNITYSDK_OFFSET(0x2A34180)
#define F7F97A0BCB155C0E_E65B1160155AEEAC_OFFSET UNITYSDK_OFFSET(0x2A34260)
#define F7F97A0BCB155C0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7F97A0BCB155C0E_TypeDefinitionIndex = 18334;

class F7F97A0BCB155C0E : public ::System::Object
{
public:
	static ::FCECB52A00C1344E<::UnityEngine::Object*>** StaticGet_AF1B01E05BB633B6()
	{
		return (::FCECB52A00C1344E<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(F7F97A0BCB155C0E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F7F97A0BCB155C0E_A527EE0EF09ADE12** StaticGet_B9E2DCAA23473343()
	{
		return (::F7F97A0BCB155C0E_A527EE0EF09ADE12**)Il2CppClass::FromTypeDefinitionIndex(F7F97A0BCB155C0E_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>** StaticGet_A9CB46A3AA27970A()
	{
		return (::System::Collections::Generic::List_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(F7F97A0BCB155C0E_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::UnityEngine::BE5668376C82998A B9E7ADAF23F19159(::UnityEngine::Object* E2F6B9B519FC27BB, ::System::String* E97E8D008427A296, ::UnityEngine::GUIStyle* E753BE58BD730B64)
	{
		return ((::UnityEngine::BE5668376C82998A(*)(::UnityEngine::Object*, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E_B9E7ADAF23F19159_OFFSET))(E2F6B9B519FC27BB, E97E8D008427A296, E753BE58BD730B64);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E__CTOR_OFFSET))(this);
	}

	static ::System::Void E26DE9EDA59B7DB1(::System::Text::StringBuilder* A94D8812A3A79CC8)
	{
		return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E_E26DE9EDA59B7DB1_OFFSET))(A94D8812A3A79CC8);
	}

	static ::System::Void AB1F141460C6D62F(::UnityEngine::Object* E2F6B9B519FC27BB)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E_AB1F141460C6D62F_OFFSET))(E2F6B9B519FC27BB);
	}

	static ::System::Text::StringBuilder* E65B1160155AEEAC()
	{
		return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + F7F97A0BCB155C0E_E65B1160155AEEAC_OFFSET))();
	}
};
