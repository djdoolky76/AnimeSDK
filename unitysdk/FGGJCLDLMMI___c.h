#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGGJCLDLMMI;
namespace System { class Object; }

#define FGGJCLDLMMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37EA70)
#define FGGJCLDLMMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37EAB0)
#define FGGJCLDLMMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E37EAC0)

	class FGGJCLDLMMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGGJCLDLMMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI___C_CTOR_OFFSET))(this);
		}

		::FGGJCLDLMMI* __cctor_b__28_0()
		{
			return ((::FGGJCLDLMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
