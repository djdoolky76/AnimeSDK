#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHJFDPBPAA;
namespace System { class Object; }

#define DDHJFDPBPAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17EBD0)
#define DDHJFDPBPAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17EC10)
#define DDHJFDPBPAA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E17EC20)

	class DDHJFDPBPAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHJFDPBPAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA___C_CTOR_OFFSET))(this);
		}

		::DDHJFDPBPAA* __cctor_b__33_0()
		{
			return ((::DDHJFDPBPAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHJFDPBPAA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
