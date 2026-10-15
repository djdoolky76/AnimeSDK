#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCMGFCDNAIE;
namespace System { class Object; }

#define BCMGFCDNAIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DDE70)
#define BCMGFCDNAIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DDEB0)
#define BCMGFCDNAIE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8DDEC0)

inline static constexpr unsigned int BCMGFCDNAIE___c_TypeDefinitionIndex = 28789;

	class BCMGFCDNAIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50FE0);
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
