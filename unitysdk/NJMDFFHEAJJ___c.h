#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMDFFHEAJJ;
namespace System { class Object; }

#define NJMDFFHEAJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB1F560)
#define NJMDFFHEAJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1F590)
#define NJMDFFHEAJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB1F5A0)

inline static constexpr unsigned int NJMDFFHEAJJ___c_TypeDefinitionIndex = 32325;

	class NJMDFFHEAJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMDFFHEAJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ___C_CTOR_OFFSET))(this);
		}

		::NJMDFFHEAJJ* __cctor_b__28_0()
		{
			return ((::NJMDFFHEAJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMDFFHEAJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
