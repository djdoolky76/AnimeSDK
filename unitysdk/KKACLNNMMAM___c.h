#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKACLNNMMAM;
namespace System { class Object; }

#define KKACLNNMMAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875100)
#define KKACLNNMMAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E875130)
#define KKACLNNMMAM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E875140)

	class KKACLNNMMAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKACLNNMMAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM___C_CTOR_OFFSET))(this);
		}

		::KKACLNNMMAM* __cctor_b__33_0()
		{
			return ((::KKACLNNMMAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
