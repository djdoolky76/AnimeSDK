#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBILDBEOKIK;
namespace System { class Object; }

#define BBILDBEOKIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6CC0)
#define BBILDBEOKIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6CF0)
#define BBILDBEOKIK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7C6D00)

	class BBILDBEOKIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBILDBEOKIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBILDBEOKIK___C_CTOR_OFFSET))(this);
		}

		::BBILDBEOKIK* __cctor_b__18_0()
		{
			return ((::BBILDBEOKIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBILDBEOKIK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
