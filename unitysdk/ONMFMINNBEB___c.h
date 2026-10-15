#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONMFMINNBEB;
namespace System { class Object; }

#define ONMFMINNBEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECEF30)
#define ONMFMINNBEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DECEF60)
#define ONMFMINNBEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DECEF70)

	class ONMFMINNBEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMFMINNBEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB___C_CTOR_OFFSET))(this);
		}

		::ONMFMINNBEB* __cctor_b__23_0()
		{
			return ((::ONMFMINNBEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMFMINNBEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
