#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGEDKNLBCAN;
namespace System { class Object; }

#define LGEDKNLBCAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94EA90)
#define LGEDKNLBCAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94EAD0)
#define LGEDKNLBCAN___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E94EAE0)

	class LGEDKNLBCAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEDKNLBCAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEDKNLBCAN___C_CTOR_OFFSET))(this);
		}

		::LGEDKNLBCAN* __cctor_b__68_0()
		{
			return ((::LGEDKNLBCAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEDKNLBCAN___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
