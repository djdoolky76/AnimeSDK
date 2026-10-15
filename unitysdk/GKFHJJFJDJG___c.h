#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKFHJJFJDJG;
namespace System { class Object; }

#define GKFHJJFJDJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B27F0)
#define GKFHJJFJDJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B2820)
#define GKFHJJFJDJG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E4B2830)

	class GKFHJJFJDJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKFHJJFJDJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG___C_CTOR_OFFSET))(this);
		}

		::GKFHJJFJDJG* __cctor_b__43_0()
		{
			return ((::GKFHJJFJDJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
