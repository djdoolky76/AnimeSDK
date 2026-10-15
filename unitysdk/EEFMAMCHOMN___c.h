#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFMAMCHOMN;
namespace System { class Object; }

#define EEFMAMCHOMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23B460)
#define EEFMAMCHOMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E23B490)
#define EEFMAMCHOMN___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E23B4A0)

inline static constexpr unsigned int EEFMAMCHOMN___c_TypeDefinitionIndex = 25387;

	class EEFMAMCHOMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x455D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFMAMCHOMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN___C_CTOR_OFFSET))(this);
		}

		::EEFMAMCHOMN* __cctor_b__58_0()
		{
			return ((::EEFMAMCHOMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMAMCHOMN___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
