#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNFMEHAEIJI;
namespace System { class Object; }

#define CNFMEHAEIJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F400EA0)
#define CNFMEHAEIJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F400EE0)
#define CNFMEHAEIJI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F400EF0)

inline static constexpr unsigned int CNFMEHAEIJI___c_TypeDefinitionIndex = 28481;

	class CNFMEHAEIJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNFMEHAEIJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI___C_CTOR_OFFSET))(this);
		}

		::CNFMEHAEIJI* __cctor_b__18_0()
		{
			return ((::CNFMEHAEIJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFMEHAEIJI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
