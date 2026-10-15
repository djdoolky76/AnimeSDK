#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCCDKHNGIPH;
namespace System { class Object; }

#define FCCDKHNGIPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33E250)
#define FCCDKHNGIPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33E280)
#define FCCDKHNGIPH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E33E290)

	class FCCDKHNGIPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDKHNGIPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCDKHNGIPH___C_CTOR_OFFSET))(this);
		}

		::FCCDKHNGIPH* __cctor_b__48_0()
		{
			return ((::FCCDKHNGIPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCDKHNGIPH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
