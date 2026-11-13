#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPMLDNLACFO;
namespace System { class Object; }

#define IPMLDNLACFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE8190)
#define IPMLDNLACFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE81D0)
#define IPMLDNLACFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FEE81E0)

inline static constexpr unsigned int IPMLDNLACFO___c_TypeDefinitionIndex = 32730;

	class IPMLDNLACFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMLDNLACFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO___C_CTOR_OFFSET))(this);
		}

		::IPMLDNLACFO* __cctor_b__28_0()
		{
			return ((::IPMLDNLACFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMLDNLACFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
