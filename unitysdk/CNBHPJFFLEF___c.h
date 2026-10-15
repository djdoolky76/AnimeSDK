#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNBHPJFFLEF;
namespace System { class Object; }

#define CNBHPJFFLEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D9690)
#define CNBHPJFFLEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D96D0)
#define CNBHPJFFLEF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0D96E0)

inline static constexpr unsigned int CNBHPJFFLEF___c_TypeDefinitionIndex = 29279;

	class CNBHPJFFLEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNBHPJFFLEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF___C_CTOR_OFFSET))(this);
		}

		::CNBHPJFFLEF* __cctor_b__28_0()
		{
			return ((::CNBHPJFFLEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
