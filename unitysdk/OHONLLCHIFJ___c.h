#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHONLLCHIFJ;
namespace System { class Object; }

#define OHONLLCHIFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE67520)
#define OHONLLCHIFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE67560)
#define OHONLLCHIFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE67570)

inline static constexpr unsigned int OHONLLCHIFJ___c_TypeDefinitionIndex = 33572;

	class OHONLLCHIFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHONLLCHIFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ___C_CTOR_OFFSET))(this);
		}

		::OHONLLCHIFJ* __cctor_b__23_0()
		{
			return ((::OHONLLCHIFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
