#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLEGGJHBDN;
namespace System { class Object; }

#define IGLEGGJHBDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E651120)
#define IGLEGGJHBDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E651150)
#define IGLEGGJHBDN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E651160)

	class IGLEGGJHBDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLEGGJHBDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLEGGJHBDN___C_CTOR_OFFSET))(this);
		}

		::IGLEGGJHBDN* __cctor_b__38_0()
		{
			return ((::IGLEGGJHBDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLEGGJHBDN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
