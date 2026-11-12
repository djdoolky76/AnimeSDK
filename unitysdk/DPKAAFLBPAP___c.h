#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPKAAFLBPAP;
namespace System { class Object; }

#define DPKAAFLBPAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4F1880)
#define DPKAAFLBPAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F18B0)
#define DPKAAFLBPAP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F4F18C0)

inline static constexpr unsigned int DPKAAFLBPAP___c_TypeDefinitionIndex = 27225;

	class DPKAAFLBPAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPKAAFLBPAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP___C_CTOR_OFFSET))(this);
		}

		::DPKAAFLBPAP* __cctor_b__18_0()
		{
			return ((::DPKAAFLBPAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAAFLBPAP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
