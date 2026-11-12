#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCKOKDHNJDC;
namespace System { class Object; }

#define NCKOKDHNJDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE1F950)
#define NCKOKDHNJDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1F990)
#define NCKOKDHNJDC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE1F9A0)

inline static constexpr unsigned int NCKOKDHNJDC___c_TypeDefinitionIndex = 29867;

	class NCKOKDHNJDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68400);
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
