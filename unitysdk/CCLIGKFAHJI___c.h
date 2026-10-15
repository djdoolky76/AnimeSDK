#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCLIGKFAHJI;
namespace System { class Object; }

#define CCLIGKFAHJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E078E40)
#define CCLIGKFAHJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E078E80)
#define CCLIGKFAHJI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E078E90)

	class CCLIGKFAHJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCLIGKFAHJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI___C_CTOR_OFFSET))(this);
		}

		::CCLIGKFAHJI* __cctor_b__18_0()
		{
			return ((::CCLIGKFAHJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLIGKFAHJI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
