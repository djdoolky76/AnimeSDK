#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBOJACNHEC;
namespace System { class Object; }

#define EBBOJACNHEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203F4A40)
#define EBBOJACNHEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203F4A80)
#define EBBOJACNHEC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x203F4A90)

inline static constexpr unsigned int EBBOJACNHEC___c_TypeDefinitionIndex = 34834;

	class EBBOJACNHEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40380);
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
