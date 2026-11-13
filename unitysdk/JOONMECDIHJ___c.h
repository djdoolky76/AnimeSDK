#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOONMECDIHJ;
namespace System { class Object; }

#define JOONMECDIHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D5870)
#define JOONMECDIHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D58A0)
#define JOONMECDIHJ___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F8D58B0)

inline static constexpr unsigned int JOONMECDIHJ___c_TypeDefinitionIndex = 33439;

	class JOONMECDIHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x687B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOONMECDIHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOONMECDIHJ___C_CTOR_OFFSET))(this);
		}

		::JOONMECDIHJ* __cctor_b__58_0()
		{
			return ((::JOONMECDIHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOONMECDIHJ___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
