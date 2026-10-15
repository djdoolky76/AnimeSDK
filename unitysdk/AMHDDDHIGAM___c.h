#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMHDDDHIGAM;
namespace System { class Object; }

#define AMHDDDHIGAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E521FF0)
#define AMHDDDHIGAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E522030)
#define AMHDDDHIGAM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E522040)

	class AMHDDDHIGAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHDDDHIGAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM___C_CTOR_OFFSET))(this);
		}

		::AMHDDDHIGAM* __cctor_b__28_0()
		{
			return ((::AMHDDDHIGAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
