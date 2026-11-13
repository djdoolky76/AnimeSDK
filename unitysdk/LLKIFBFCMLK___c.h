#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLKIFBFCMLK;
namespace System { class Object; }

#define LLKIFBFCMLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF4A220)
#define LLKIFBFCMLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4A260)
#define LLKIFBFCMLK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF4A270)

inline static constexpr unsigned int LLKIFBFCMLK___c_TypeDefinitionIndex = 26413;

	class LLKIFBFCMLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41220);
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
