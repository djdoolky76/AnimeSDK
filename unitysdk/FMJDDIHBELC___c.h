#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMJDDIHBELC;
namespace System { class Object; }

#define FMJDDIHBELC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E84E0)
#define FMJDDIHBELC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E8520)
#define FMJDDIHBELC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3E8530)

inline static constexpr unsigned int FMJDDIHBELC___c_TypeDefinitionIndex = 29365;

	class FMJDDIHBELC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMJDDIHBELC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC___C_CTOR_OFFSET))(this);
		}

		::FMJDDIHBELC* __cctor_b__28_0()
		{
			return ((::FMJDDIHBELC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
