#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMDKHGGGMBC;
namespace System { class Object; }

#define NMDKHGGGMBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F9F0)
#define NMDKHGGGMBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6FA20)
#define NMDKHGGGMBC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB6FA30)

	class NMDKHGGGMBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDKHGGGMBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC___C_CTOR_OFFSET))(this);
		}

		::NMDKHGGGMBC* __cctor_b__43_0()
		{
			return ((::NMDKHGGGMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDKHGGGMBC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
