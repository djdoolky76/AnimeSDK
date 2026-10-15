#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PACPOIAFPFF;
namespace System { class Object; }

#define PACPOIAFPFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEB5F0)
#define PACPOIAFPFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEB630)
#define PACPOIAFPFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEEB640)

	class PACPOIAFPFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACPOIAFPFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF___C_CTOR_OFFSET))(this);
		}

		::PACPOIAFPFF* __cctor_b__28_0()
		{
			return ((::PACPOIAFPFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACPOIAFPFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
