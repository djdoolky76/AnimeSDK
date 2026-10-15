#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJHEOJCGPAJ;
namespace System { class Object; }

#define LJHEOJCGPAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9829A0)
#define LJHEOJCGPAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9829E0)
#define LJHEOJCGPAJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9829F0)

	class LJHEOJCGPAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJHEOJCGPAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ___C_CTOR_OFFSET))(this);
		}

		::LJHEOJCGPAJ* __cctor_b__28_0()
		{
			return ((::LJHEOJCGPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHEOJCGPAJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
