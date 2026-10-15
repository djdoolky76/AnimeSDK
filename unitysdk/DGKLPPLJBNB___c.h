#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGKLPPLJBNB;
namespace System { class Object; }

#define DGKLPPLJBNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B07F0)
#define DGKLPPLJBNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B0820)
#define DGKLPPLJBNB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1B0830)

	class DGKLPPLJBNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x349E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKLPPLJBNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPPLJBNB___C_CTOR_OFFSET))(this);
		}

		::DGKLPPLJBNB* __cctor_b__33_0()
		{
			return ((::DGKLPPLJBNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPPLJBNB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
