#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCMGFCDNAIE;
namespace System { class Object; }

#define BCMGFCDNAIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBCF7B0)
#define BCMGFCDNAIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBCF7F0)
#define BCMGFCDNAIE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBCF800)

inline static constexpr unsigned int BCMGFCDNAIE___c_TypeDefinitionIndex = 29379;

	class BCMGFCDNAIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCMGFCDNAIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE___C_CTOR_OFFSET))(this);
		}

		::BCMGFCDNAIE* __cctor_b__23_0()
		{
			return ((::BCMGFCDNAIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
