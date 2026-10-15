#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCFGCHAMNOL;
namespace System { class Object; }

#define GCFGCHAMNOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43D870)
#define GCFGCHAMNOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43D8A0)
#define GCFGCHAMNOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E43D8B0)

	class GCFGCHAMNOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCFGCHAMNOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL___C_CTOR_OFFSET))(this);
		}

		::GCFGCHAMNOL* __cctor_b__28_0()
		{
			return ((::GCFGCHAMNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
