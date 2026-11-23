#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E3199C7155F59413.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class E3E5DF04DCFE6819; }

#define E0F2DAEDF9F00D50_F667CCD0A2577096_OFFSET UNITYSDK_OFFSET(0x3F2F840)
#define E0F2DAEDF9F00D50_FFAC70358034EDA2_OFFSET UNITYSDK_OFFSET(0x3F2F780)
#define E0F2DAEDF9F00D50__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F2FBE0)

inline static constexpr unsigned int E0F2DAEDF9F00D50_TypeDefinitionIndex = 20018;

class E0F2DAEDF9F00D50 : public ::System::Object
{
public:
	static ::System::Action_1<::System::Exception*>** StaticGet_A49C07B41DB05ABB()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(E0F2DAEDF9F00D50_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_E422081BA667AF2E()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E0F2DAEDF9F00D50_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::UnityEngine::E3199C7155F59413* StaticGet_A8F8C6ED0ABC5AAF()
	{
		return (::UnityEngine::E3199C7155F59413*)Il2CppClass::FromTypeDefinitionIndex(E0F2DAEDF9F00D50_TypeDefinitionIndex)->GetStaticField(0xC);
	}
	static ::System::Boolean* StaticGet_A3DCFAA1BBF633D7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E0F2DAEDF9F00D50_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Threading::E3E5DF04DCFE6819** StaticGet_F52E76827F33837F()
	{
		return (::System::Threading::E3E5DF04DCFE6819**)Il2CppClass::FromTypeDefinitionIndex(E0F2DAEDF9F00D50_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void F667CCD0A2577096(::System::Exception* A4E4D73B752E2373)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + E0F2DAEDF9F00D50_F667CCD0A2577096_OFFSET))(A4E4D73B752E2373);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E0F2DAEDF9F00D50__CCTOR_OFFSET))();
	}

	static ::System::Void FFAC70358034EDA2(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + E0F2DAEDF9F00D50_FFAC70358034EDA2_OFFSET))(E5EB06E4FD2C32F7);
	}
};
