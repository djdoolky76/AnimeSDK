#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEHEHAMKLC;
namespace System { class Object; }

#define KLEHEHAMKLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBA4940)
#define KLEHEHAMKLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA4980)
#define KLEHEHAMKLC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBA4990)

inline static constexpr unsigned int KLEHEHAMKLC___c_TypeDefinitionIndex = 34078;

	class KLEHEHAMKLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x185B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEHEHAMKLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC___C_CTOR_OFFSET))(this);
		}

		::KLEHEHAMKLC* __cctor_b__23_0()
		{
			return ((::KLEHEHAMKLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEHEHAMKLC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
