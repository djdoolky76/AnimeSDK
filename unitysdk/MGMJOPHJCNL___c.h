#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGMJOPHJCNL;
namespace System { class Object; }

#define MGMJOPHJCNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FC9E0)
#define MGMJOPHJCNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FCA20)
#define MGMJOPHJCNL___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E9FCA30)

inline static constexpr unsigned int MGMJOPHJCNL___c_TypeDefinitionIndex = 25625;

	class MGMJOPHJCNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x506C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGMJOPHJCNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMJOPHJCNL___C_CTOR_OFFSET))(this);
		}

		::MGMJOPHJCNL* __cctor_b__93_0()
		{
			return ((::MGMJOPHJCNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMJOPHJCNL___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
