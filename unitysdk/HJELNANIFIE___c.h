#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJELNANIFIE;
namespace System { class Object; }

#define HJELNANIFIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A7010)
#define HJELNANIFIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A7050)
#define HJELNANIFIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5A7060)

	class HJELNANIFIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJELNANIFIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE___C_CTOR_OFFSET))(this);
		}

		::HJELNANIFIE* __cctor_b__28_0()
		{
			return ((::HJELNANIFIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJELNANIFIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
