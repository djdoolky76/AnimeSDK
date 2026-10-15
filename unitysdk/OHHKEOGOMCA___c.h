#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHKEOGOMCA;
namespace System { class Object; }

#define OHHKEOGOMCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE60680)
#define OHHKEOGOMCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE606B0)
#define OHHKEOGOMCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE606C0)

	class OHHKEOGOMCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHKEOGOMCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA___C_CTOR_OFFSET))(this);
		}

		::OHHKEOGOMCA* __cctor_b__23_0()
		{
			return ((::OHHKEOGOMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
