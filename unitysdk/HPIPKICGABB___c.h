#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPIPKICGABB;
namespace System { class Object; }

#define HPIPKICGABB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F9CF0)
#define HPIPKICGABB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F9D30)
#define HPIPKICGABB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5F9D40)

inline static constexpr unsigned int HPIPKICGABB___c_TypeDefinitionIndex = 32881;

	class HPIPKICGABB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x519C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPIPKICGABB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB___C_CTOR_OFFSET))(this);
		}

		::HPIPKICGABB* __cctor_b__23_0()
		{
			return ((::HPIPKICGABB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
