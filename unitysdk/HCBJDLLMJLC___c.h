#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBJDLLMJLC;
namespace System { class Object; }

#define HCBJDLLMJLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E534D90)
#define HCBJDLLMJLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E534DD0)
#define HCBJDLLMJLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E534DE0)

inline static constexpr unsigned int HCBJDLLMJLC___c_TypeDefinitionIndex = 26357;

	class HCBJDLLMJLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBJDLLMJLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC___C_CTOR_OFFSET))(this);
		}

		::HCBJDLLMJLC* __cctor_b__28_0()
		{
			return ((::HCBJDLLMJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBJDLLMJLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
