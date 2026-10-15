#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEDHCKDDFA;
namespace System { class Object; }

#define AFEDHCKDDFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1174B0)
#define AFEDHCKDDFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1174F0)
#define AFEDHCKDDFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E117500)

	class AFEDHCKDDFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFEDHCKDDFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA___C_CTOR_OFFSET))(this);
		}

		::AFEDHCKDDFA* __cctor_b__33_0()
		{
			return ((::AFEDHCKDDFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
