#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FANIODAOCGG;
namespace System { class Object; }

#define FANIODAOCGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F610610)
#define FANIODAOCGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F610650)
#define FANIODAOCGG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F610660)

inline static constexpr unsigned int FANIODAOCGG___c_TypeDefinitionIndex = 27949;

	class FANIODAOCGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FANIODAOCGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG___C_CTOR_OFFSET))(this);
		}

		::FANIODAOCGG* __cctor_b__28_0()
		{
			return ((::FANIODAOCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
