#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKIKIGLIMJ;
namespace System { class Object; }

#define LBKIKIGLIMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DDE60)
#define LBKIKIGLIMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DDEA0)
#define LBKIKIGLIMJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8DDEB0)

	class LBKIKIGLIMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKIKIGLIMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ___C_CTOR_OFFSET))(this);
		}

		::LBKIKIGLIMJ* __cctor_b__28_0()
		{
			return ((::LBKIKIGLIMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
