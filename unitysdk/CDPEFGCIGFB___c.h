#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDPEFGCIGFB;
namespace System { class Object; }

#define CDPEFGCIGFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08CE50)
#define CDPEFGCIGFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08CE90)
#define CDPEFGCIGFB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E08CEA0)

	class CDPEFGCIGFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDPEFGCIGFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB___C_CTOR_OFFSET))(this);
		}

		::CDPEFGCIGFB* __cctor_b__18_0()
		{
			return ((::CDPEFGCIGFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEFGCIGFB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
