#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFMEALLIHPI;
namespace System { class Object; }

#define NFMEALLIHPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE495A0)
#define NFMEALLIHPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE495D0)
#define NFMEALLIHPI___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1FE495E0)

inline static constexpr unsigned int NFMEALLIHPI___c_TypeDefinitionIndex = 34919;

	class NFMEALLIHPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFMEALLIHPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI___C_CTOR_OFFSET))(this);
		}

		::NFMEALLIHPI* __cctor_b__47_0()
		{
			return ((::NFMEALLIHPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI___C___CCTOR_B__47_0_OFFSET))(this);
		}

	};
