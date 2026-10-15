#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIOLAAKLDED;
namespace System { class Object; }

#define GIOLAAKLDED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3740)
#define GIOLAAKLDED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3780)
#define GIOLAAKLDED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4A3790)

	class GIOLAAKLDED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIOLAAKLDED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOLAAKLDED___C_CTOR_OFFSET))(this);
		}

		::GIOLAAKLDED* __cctor_b__23_0()
		{
			return ((::GIOLAAKLDED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOLAAKLDED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
