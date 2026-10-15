#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPIEHAMDJAP;
namespace System { class Object; }

#define HPIEHAMDJAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8570)
#define HPIEHAMDJAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F85A0)
#define HPIEHAMDJAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5F85B0)

inline static constexpr unsigned int HPIEHAMDJAP___c_TypeDefinitionIndex = 30597;

	class HPIEHAMDJAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPIEHAMDJAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP___C_CTOR_OFFSET))(this);
		}

		::HPIEHAMDJAP* __cctor_b__28_0()
		{
			return ((::HPIEHAMDJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEHAMDJAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
