#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOAAPIDOIC;
namespace System { class Object; }

#define JBOAAPIDOIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CF070)
#define JBOAAPIDOIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CF0B0)
#define JBOAAPIDOIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6CF0C0)

inline static constexpr unsigned int JBOAAPIDOIC___c_TypeDefinitionIndex = 32514;

	class JBOAAPIDOIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBOAAPIDOIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC___C_CTOR_OFFSET))(this);
		}

		::JBOAAPIDOIC* __cctor_b__28_0()
		{
			return ((::JBOAAPIDOIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOAAPIDOIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
