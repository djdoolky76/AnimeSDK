#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLKIFBFCMLK;
namespace System { class Object; }

#define LLKIFBFCMLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99D7E0)
#define LLKIFBFCMLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99D820)
#define LLKIFBFCMLK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E99D830)

inline static constexpr unsigned int LLKIFBFCMLK___c_TypeDefinitionIndex = 25916;

	class LLKIFBFCMLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C2A0);
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
