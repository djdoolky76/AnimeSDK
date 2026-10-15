#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFDPLINPMJF;
namespace System { class Object; }

#define DFDPLINPMJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19E830)
#define DFDPLINPMJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19E870)
#define DFDPLINPMJF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E19E880)

	class DFDPLINPMJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDPLINPMJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF___C_CTOR_OFFSET))(this);
		}

		::DFDPLINPMJF* __cctor_b__33_0()
		{
			return ((::DFDPLINPMJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
