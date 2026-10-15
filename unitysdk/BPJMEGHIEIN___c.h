#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJMEGHIEIN;
namespace System { class Object; }

#define BPJMEGHIEIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04A430)
#define BPJMEGHIEIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04A470)
#define BPJMEGHIEIN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E04A480)

	class BPJMEGHIEIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x554A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPJMEGHIEIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN___C_CTOR_OFFSET))(this);
		}

		::BPJMEGHIEIN* __cctor_b__38_0()
		{
			return ((::BPJMEGHIEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJMEGHIEIN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
