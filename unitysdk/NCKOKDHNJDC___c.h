#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCKOKDHNJDC;
namespace System { class Object; }

#define NCKOKDHNJDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB2CF0)
#define NCKOKDHNJDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB2D30)
#define NCKOKDHNJDC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAB2D40)

inline static constexpr unsigned int NCKOKDHNJDC___c_TypeDefinitionIndex = 29219;

	class NCKOKDHNJDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCKOKDHNJDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKOKDHNJDC___C_CTOR_OFFSET))(this);
		}

		::NCKOKDHNJDC* __cctor_b__33_0()
		{
			return ((::NCKOKDHNJDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKOKDHNJDC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
