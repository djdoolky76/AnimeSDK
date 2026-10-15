#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MINGMOMGNEL;
namespace System { class Object; }

#define MINGMOMGNEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3F030)
#define MINGMOMGNEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3F070)
#define MINGMOMGNEL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA3F080)

inline static constexpr unsigned int MINGMOMGNEL___c_TypeDefinitionIndex = 29784;

	class MINGMOMGNEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x532D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MINGMOMGNEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL___C_CTOR_OFFSET))(this);
		}

		::MINGMOMGNEL* __cctor_b__33_0()
		{
			return ((::MINGMOMGNEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINGMOMGNEL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
