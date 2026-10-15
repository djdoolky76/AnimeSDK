#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMABIKHOJOI;
namespace System { class Object; }

#define JMABIKHOJOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E787FB0)
#define JMABIKHOJOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E787FF0)
#define JMABIKHOJOI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E788000)

	class JMABIKHOJOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMABIKHOJOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI___C_CTOR_OFFSET))(this);
		}

		::JMABIKHOJOI* __cctor_b__28_0()
		{
			return ((::JMABIKHOJOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
