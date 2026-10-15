#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFOGFOBHDEK;
namespace System { class Object; }

#define FFOGFOBHDEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E379D30)
#define FFOGFOBHDEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E379D70)
#define FFOGFOBHDEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E379D80)

inline static constexpr unsigned int FFOGFOBHDEK___c_TypeDefinitionIndex = 29167;

	class FFOGFOBHDEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFOGFOBHDEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK___C_CTOR_OFFSET))(this);
		}

		::FFOGFOBHDEK* __cctor_b__28_0()
		{
			return ((::FFOGFOBHDEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOGFOBHDEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
