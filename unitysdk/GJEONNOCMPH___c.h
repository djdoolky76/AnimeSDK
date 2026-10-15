#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJEONNOCMPH;
namespace System { class Object; }

#define GJEONNOCMPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A7840)
#define GJEONNOCMPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A7870)
#define GJEONNOCMPH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4A7880)

	class GJEONNOCMPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJEONNOCMPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH___C_CTOR_OFFSET))(this);
		}

		::GJEONNOCMPH* __cctor_b__18_0()
		{
			return ((::GJEONNOCMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
