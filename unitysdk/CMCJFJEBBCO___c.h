#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMCJFJEBBCO;
namespace System { class Object; }

#define CMCJFJEBBCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205E7210)
#define CMCJFJEBBCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205E7240)
#define CMCJFJEBBCO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x205E7250)

inline static constexpr unsigned int CMCJFJEBBCO___c_TypeDefinitionIndex = 25804;

	class CMCJFJEBBCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x156D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMCJFJEBBCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO___C_CTOR_OFFSET))(this);
		}

		::CMCJFJEBBCO* __cctor_b__43_0()
		{
			return ((::CMCJFJEBBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJFJEBBCO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
