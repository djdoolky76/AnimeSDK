#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJOKNEDGHEO;
namespace System { class Object; }

#define KJOKNEDGHEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8735D0)
#define KJOKNEDGHEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E873610)
#define KJOKNEDGHEO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E873620)

	class KJOKNEDGHEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D5E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOKNEDGHEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO___C_CTOR_OFFSET))(this);
		}

		::KJOKNEDGHEO* __cctor_b__18_0()
		{
			return ((::KJOKNEDGHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOKNEDGHEO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
