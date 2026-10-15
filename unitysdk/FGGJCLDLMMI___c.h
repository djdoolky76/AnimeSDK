#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGGJCLDLMMI;
namespace System { class Object; }

#define FGGJCLDLMMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E351420)
#define FGGJCLDLMMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E351460)
#define FGGJCLDLMMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E351470)

inline static constexpr unsigned int FGGJCLDLMMI___c_TypeDefinitionIndex = 33106;

	class FGGJCLDLMMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55680);
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
