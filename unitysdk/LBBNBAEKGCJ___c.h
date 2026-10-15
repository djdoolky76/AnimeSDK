#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBNBAEKGCJ;
namespace System { class Object; }

#define LBBNBAEKGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D9220)
#define LBBNBAEKGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D9260)
#define LBBNBAEKGCJ___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E8D9270)

	class LBBNBAEKGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x301B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBNBAEKGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBNBAEKGCJ___C_CTOR_OFFSET))(this);
		}

		::LBBNBAEKGCJ* __cctor_b__37_0()
		{
			return ((::LBBNBAEKGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBNBAEKGCJ___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
