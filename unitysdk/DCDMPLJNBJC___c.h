#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCDMPLJNBJC;
namespace System { class Object; }

#define DCDMPLJNBJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F441FC0)
#define DCDMPLJNBJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F441FF0)
#define DCDMPLJNBJC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F442000)

inline static constexpr unsigned int DCDMPLJNBJC___c_TypeDefinitionIndex = 34546;

	class DCDMPLJNBJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCDMPLJNBJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC___C_CTOR_OFFSET))(this);
		}

		::DCDMPLJNBJC* __cctor_b__38_0()
		{
			return ((::DCDMPLJNBJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCDMPLJNBJC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
