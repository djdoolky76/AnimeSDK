#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNOLIMEEOM;
namespace System { class Object; }

#define FHNOLIMEEOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206989F0)
#define FHNOLIMEEOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20698A30)
#define FHNOLIMEEOM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20698A40)

inline static constexpr unsigned int FHNOLIMEEOM___c_TypeDefinitionIndex = 27255;

	class FHNOLIMEEOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNOLIMEEOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM___C_CTOR_OFFSET))(this);
		}

		::FHNOLIMEEOM* __cctor_b__38_0()
		{
			return ((::FHNOLIMEEOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
