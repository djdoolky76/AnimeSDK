#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAMDDOKJIH;
namespace System { class Object; }

#define OBAMDDOKJIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9B200)
#define OBAMDDOKJIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9B240)
#define OBAMDDOKJIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD9B250)

inline static constexpr unsigned int OBAMDDOKJIH___c_TypeDefinitionIndex = 33056;

	class OBAMDDOKJIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBAMDDOKJIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH___C_CTOR_OFFSET))(this);
		}

		::OBAMDDOKJIH* __cctor_b__28_0()
		{
			return ((::OBAMDDOKJIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
