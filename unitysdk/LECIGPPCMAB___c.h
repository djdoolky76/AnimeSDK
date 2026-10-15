#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LECIGPPCMAB;
namespace System { class Object; }

#define LECIGPPCMAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E925270)
#define LECIGPPCMAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9252B0)
#define LECIGPPCMAB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9252C0)

	class LECIGPPCMAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LECIGPPCMAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB___C_CTOR_OFFSET))(this);
		}

		::LECIGPPCMAB* __cctor_b__28_0()
		{
			return ((::LECIGPPCMAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIGPPCMAB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
