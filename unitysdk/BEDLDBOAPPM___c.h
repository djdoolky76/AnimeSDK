#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEDLDBOAPPM;
namespace System { class Object; }

#define BEDLDBOAPPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E923010)
#define BEDLDBOAPPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E923050)
#define BEDLDBOAPPM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E923060)

	class BEDLDBOAPPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEDLDBOAPPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM___C_CTOR_OFFSET))(this);
		}

		::BEDLDBOAPPM* __cctor_b__33_0()
		{
			return ((::BEDLDBOAPPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
