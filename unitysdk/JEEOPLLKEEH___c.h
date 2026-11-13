#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEOPLLKEEH;
namespace System { class Object; }

#define JEEOPLLKEEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20433810)
#define JEEOPLLKEEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20433840)
#define JEEOPLLKEEH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20433850)

inline static constexpr unsigned int JEEOPLLKEEH___c_TypeDefinitionIndex = 35216;

	class JEEOPLLKEEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC50);
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
