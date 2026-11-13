#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COOIDLLFFIJ;
namespace System { class Object; }

#define COOIDLLFFIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E24F0)
#define COOIDLLFFIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204E2520)
#define COOIDLLFFIJ___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x204E2530)

inline static constexpr unsigned int COOIDLLFFIJ___c_TypeDefinitionIndex = 34731;

	class COOIDLLFFIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COOIDLLFFIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ___C_CTOR_OFFSET))(this);
		}

		::COOIDLLFFIJ* __cctor_b__32_0()
		{
			return ((::COOIDLLFFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOIDLLFFIJ___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
