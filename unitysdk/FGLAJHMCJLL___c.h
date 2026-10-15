#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGLAJHMCJLL;
namespace System { class Object; }

#define FGLAJHMCJLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E381BC0)
#define FGLAJHMCJLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E381BF0)
#define FGLAJHMCJLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E381C00)

	class FGLAJHMCJLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGLAJHMCJLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL___C_CTOR_OFFSET))(this);
		}

		::FGLAJHMCJLL* __cctor_b__28_0()
		{
			return ((::FGLAJHMCJLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLAJHMCJLL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
