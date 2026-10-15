#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLKIFBFCMLK;
namespace System { class Object; }

#define LLKIFBFCMLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E970180)
#define LLKIFBFCMLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9701C0)
#define LLKIFBFCMLK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9701D0)

inline static constexpr unsigned int LLKIFBFCMLK___c_TypeDefinitionIndex = 25916;

	class LLKIFBFCMLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLKIFBFCMLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK___C_CTOR_OFFSET))(this);
		}

		::LLKIFBFCMLK* __cctor_b__23_0()
		{
			return ((::LLKIFBFCMLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKIFBFCMLK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
