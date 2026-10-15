#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHOPIKPAMPJ;
namespace System { class Object; }

#define BHOPIKPAMPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD6F0)
#define BHOPIKPAMPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD730)
#define BHOPIKPAMPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDFD740)

	class BHOPIKPAMPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHOPIKPAMPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ___C_CTOR_OFFSET))(this);
		}

		::BHOPIKPAMPJ* __cctor_b__28_0()
		{
			return ((::BHOPIKPAMPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
