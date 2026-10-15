#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPHFANMNHJP;
namespace System { class Object; }

#define JPHFANMNHJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D53C0)
#define JPHFANMNHJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5400)
#define JPHFANMNHJP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7D5410)

	class JPHFANMNHJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPHFANMNHJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHFANMNHJP___C_CTOR_OFFSET))(this);
		}

		::JPHFANMNHJP* __cctor_b__28_0()
		{
			return ((::JPHFANMNHJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHFANMNHJP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
