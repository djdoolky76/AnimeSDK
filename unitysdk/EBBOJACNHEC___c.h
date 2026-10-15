#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBOJACNHEC;
namespace System { class Object; }

#define EBBOJACNHEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2052E0)
#define EBBOJACNHEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E205320)
#define EBBOJACNHEC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E205330)

inline static constexpr unsigned int EBBOJACNHEC___c_TypeDefinitionIndex = 33919;

	class EBBOJACNHEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBOJACNHEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC___C_CTOR_OFFSET))(this);
		}

		::EBBOJACNHEC* __cctor_b__33_0()
		{
			return ((::EBBOJACNHEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBOJACNHEC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
