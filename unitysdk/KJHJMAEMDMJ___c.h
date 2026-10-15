#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJHJMAEMDMJ;
namespace System { class Object; }

#define KJHJMAEMDMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86CFD0)
#define KJHJMAEMDMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86D010)
#define KJHJMAEMDMJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E86D020)

	class KJHJMAEMDMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJHJMAEMDMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ___C_CTOR_OFFSET))(this);
		}

		::KJHJMAEMDMJ* __cctor_b__33_0()
		{
			return ((::KJHJMAEMDMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
