#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAAIPIBNGM;
namespace System { class Object; }

#define EOAAIPIBNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F5560)
#define EOAAIPIBNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F55A0)
#define EOAAIPIBNGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2F55B0)

	class EOAAIPIBNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x549B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOAAIPIBNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM___C_CTOR_OFFSET))(this);
		}

		::EOAAIPIBNGM* __cctor_b__28_0()
		{
			return ((::EOAAIPIBNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
