#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEPKPAHIIN;
namespace System { class Object; }

#define DGEPKPAHIIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AC490)
#define DGEPKPAHIIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AC4D0)
#define DGEPKPAHIIN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1AC4E0)

	class DGEPKPAHIIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGEPKPAHIIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN___C_CTOR_OFFSET))(this);
		}

		::DGEPKPAHIIN* __cctor_b__33_0()
		{
			return ((::DGEPKPAHIIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
