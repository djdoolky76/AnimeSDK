#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGLBKDELHJK;
namespace System { class Object; }

#define PGLBKDELHJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF34040)
#define PGLBKDELHJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF34080)
#define PGLBKDELHJK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF34090)

inline static constexpr unsigned int PGLBKDELHJK___c_TypeDefinitionIndex = 30736;

	class PGLBKDELHJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLBKDELHJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK___C_CTOR_OFFSET))(this);
		}

		::PGLBKDELHJK* __cctor_b__38_0()
		{
			return ((::PGLBKDELHJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLBKDELHJK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
