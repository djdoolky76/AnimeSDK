#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNIJKHENBF;
namespace System { class Object; }

#define GKNIJKHENBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BB270)
#define GKNIJKHENBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BB2A0)
#define GKNIJKHENBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4BB2B0)

	class GKNIJKHENBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNIJKHENBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF___C_CTOR_OFFSET))(this);
		}

		::GKNIJKHENBF* __cctor_b__28_0()
		{
			return ((::GKNIJKHENBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNIJKHENBF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
