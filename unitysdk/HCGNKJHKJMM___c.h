#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGNKJHKJMM;
namespace System { class Object; }

#define HCGNKJHKJMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53E1E0)
#define HCGNKJHKJMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53E220)
#define HCGNKJHKJMM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E53E230)

inline static constexpr unsigned int HCGNKJHKJMM___c_TypeDefinitionIndex = 28069;

	class HCGNKJHKJMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGNKJHKJMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM___C_CTOR_OFFSET))(this);
		}

		::HCGNKJHKJMM* __cctor_b__28_0()
		{
			return ((::HCGNKJHKJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
