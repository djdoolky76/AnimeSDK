#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHNFHMEHCD;
namespace System { class Object; }

#define PIHNFHMEHCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F21A360)
#define PIHNFHMEHCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F21A3A0)
#define PIHNFHMEHCD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F21A3B0)

inline static constexpr unsigned int PIHNFHMEHCD___c_TypeDefinitionIndex = 33497;

	class PIHNFHMEHCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x387A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHNFHMEHCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD___C_CTOR_OFFSET))(this);
		}

		::PIHNFHMEHCD* __cctor_b__23_0()
		{
			return ((::PIHNFHMEHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
