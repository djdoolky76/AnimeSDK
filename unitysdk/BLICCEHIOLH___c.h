#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLICCEHIOLH;
namespace System { class Object; }

#define BLICCEHIOLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF63690)
#define BLICCEHIOLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF636D0)
#define BLICCEHIOLH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF636E0)

	class BLICCEHIOLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLICCEHIOLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLICCEHIOLH___C_CTOR_OFFSET))(this);
		}

		::BLICCEHIOLH* __cctor_b__33_0()
		{
			return ((::BLICCEHIOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLICCEHIOLH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
