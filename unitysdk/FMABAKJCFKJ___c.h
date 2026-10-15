#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMABAKJCFKJ;
namespace System { class Object; }

#define FMABAKJCFKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DECB0)
#define FMABAKJCFKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DECF0)
#define FMABAKJCFKJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3DED00)

	class FMABAKJCFKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C_CTOR_OFFSET))(this);
		}

		::FMABAKJCFKJ* __cctor_b__28_0()
		{
			return ((::FMABAKJCFKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
