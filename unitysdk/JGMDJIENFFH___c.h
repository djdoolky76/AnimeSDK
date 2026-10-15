#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGMDJIENFFH;
namespace System { class Object; }

#define JGMDJIENFFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73CFF0)
#define JGMDJIENFFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73D020)
#define JGMDJIENFFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E73D030)

	class JGMDJIENFFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGMDJIENFFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDJIENFFH___C_CTOR_OFFSET))(this);
		}

		::JGMDJIENFFH* __cctor_b__28_0()
		{
			return ((::JGMDJIENFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDJIENFFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
