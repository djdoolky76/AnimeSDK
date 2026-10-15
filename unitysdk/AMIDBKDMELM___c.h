#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMIDBKDMELM;
namespace System { class Object; }

#define AMIDBKDMELM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E522E80)
#define AMIDBKDMELM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E522EB0)
#define AMIDBKDMELM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E522EC0)

	class AMIDBKDMELM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIDBKDMELM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM___C_CTOR_OFFSET))(this);
		}

		::AMIDBKDMELM* __cctor_b__18_0()
		{
			return ((::AMIDBKDMELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
