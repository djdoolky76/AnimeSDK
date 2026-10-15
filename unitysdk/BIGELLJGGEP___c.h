#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIGELLJGGEP;
namespace System { class Object; }

#define BIGELLJGGEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD4E50)
#define BIGELLJGGEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD4E90)
#define BIGELLJGGEP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDD4EA0)

inline static constexpr unsigned int BIGELLJGGEP___c_TypeDefinitionIndex = 32547;

	class BIGELLJGGEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x577D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGELLJGGEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP___C_CTOR_OFFSET))(this);
		}

		::BIGELLJGGEP* __cctor_b__23_0()
		{
			return ((::BIGELLJGGEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGELLJGGEP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
