#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDACGGBMIJE;
namespace System { class Object; }

#define BDACGGBMIJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E913E60)
#define BDACGGBMIJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E913EA0)
#define BDACGGBMIJE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E913EB0)

	class BDACGGBMIJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDACGGBMIJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDACGGBMIJE___C_CTOR_OFFSET))(this);
		}

		::BDACGGBMIJE* __cctor_b__18_0()
		{
			return ((::BDACGGBMIJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDACGGBMIJE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
