#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCPMJGCHID;
namespace System { class Object; }

#define FLCPMJGCHID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B7C10)
#define FLCPMJGCHID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B7C50)
#define FLCPMJGCHID___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3B7C60)

	class FLCPMJGCHID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCPMJGCHID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID___C_CTOR_OFFSET))(this);
		}

		::FLCPMJGCHID* __cctor_b__28_0()
		{
			return ((::FLCPMJGCHID*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPMJGCHID___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
