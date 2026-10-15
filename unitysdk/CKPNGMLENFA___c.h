#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPNGMLENFA;
namespace System { class Object; }

#define CKPNGMLENFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F14A0)
#define CKPNGMLENFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F14E0)
#define CKPNGMLENFA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0F14F0)

	class CKPNGMLENFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPNGMLENFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA___C_CTOR_OFFSET))(this);
		}

		::CKPNGMLENFA* __cctor_b__23_0()
		{
			return ((::CKPNGMLENFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPNGMLENFA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
