#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCADHJHJMMD;
namespace System { class Object; }

#define DCADHJHJMMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F43F370)
#define DCADHJHJMMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F43F3B0)
#define DCADHJHJMMD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F43F3C0)

inline static constexpr unsigned int DCADHJHJMMD___c_TypeDefinitionIndex = 33862;

	class DCADHJHJMMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x250F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCADHJHJMMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD___C_CTOR_OFFSET))(this);
		}

		::DCADHJHJMMD* __cctor_b__28_0()
		{
			return ((::DCADHJHJMMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADHJHJMMD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
