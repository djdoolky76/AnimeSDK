#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDHHFKCPCIF;
namespace System { class Object; }

#define FDHHFKCPCIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32C980)
#define FDHHFKCPCIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32C9C0)
#define FDHHFKCPCIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E32C9D0)

inline static constexpr unsigned int FDHHFKCPCIF___c_TypeDefinitionIndex = 33536;

	class FDHHFKCPCIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDHHFKCPCIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF___C_CTOR_OFFSET))(this);
		}

		::FDHHFKCPCIF* __cctor_b__28_0()
		{
			return ((::FDHHFKCPCIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHHFKCPCIF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
