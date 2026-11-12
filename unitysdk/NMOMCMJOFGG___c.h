#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMOMCMJOFGG;
namespace System { class Object; }

#define NMOMCMJOFGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F06D730)
#define NMOMCMJOFGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06D770)
#define NMOMCMJOFGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F06D780)

inline static constexpr unsigned int NMOMCMJOFGG___c_TypeDefinitionIndex = 29339;

	class NMOMCMJOFGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x71B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOMCMJOFGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG___C_CTOR_OFFSET))(this);
		}

		::NMOMCMJOFGG* __cctor_b__23_0()
		{
			return ((::NMOMCMJOFGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
