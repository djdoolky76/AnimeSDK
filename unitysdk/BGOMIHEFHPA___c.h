#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
namespace System { class Object; }

#define BGOMIHEFHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20111E30)
#define BGOMIHEFHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20111E60)
#define BGOMIHEFHPA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x20111E70)

inline static constexpr unsigned int BGOMIHEFHPA___c_TypeDefinitionIndex = 30676;

	class BGOMIHEFHPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGOMIHEFHPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMIHEFHPA___C_CTOR_OFFSET))(this);
		}

		::BGOMIHEFHPA* __cctor_b__58_0()
		{
			return ((::BGOMIHEFHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMIHEFHPA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
