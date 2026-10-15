#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIACCCGNOOF;
namespace System { class Object; }

#define PIACCCGNOOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF402A0)
#define PIACCCGNOOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF402D0)
#define PIACCCGNOOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF402E0)

inline static constexpr unsigned int PIACCCGNOOF___c_TypeDefinitionIndex = 33270;

	class PIACCCGNOOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x405B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIACCCGNOOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF___C_CTOR_OFFSET))(this);
		}

		::PIACCCGNOOF* __cctor_b__23_0()
		{
			return ((::PIACCCGNOOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIACCCGNOOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
