#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEOPLLKEEH;
namespace System { class Object; }

#define JEEOPLLKEEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E717B00)
#define JEEOPLLKEEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E717B30)
#define JEEOPLLKEEH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E717B40)

inline static constexpr unsigned int JEEOPLLKEEH___c_TypeDefinitionIndex = 34288;

	class JEEOPLLKEEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEOPLLKEEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEOPLLKEEH___C_CTOR_OFFSET))(this);
		}

		::JEEOPLLKEEH* __cctor_b__38_0()
		{
			return ((::JEEOPLLKEEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEOPLLKEEH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
