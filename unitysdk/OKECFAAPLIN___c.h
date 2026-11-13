#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKECFAAPLIN;
namespace System { class Object; }

#define OKECFAAPLIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6AEF00)
#define OKECFAAPLIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6AEF40)
#define OKECFAAPLIN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6AEF50)

inline static constexpr unsigned int OKECFAAPLIN___c_TypeDefinitionIndex = 34789;

	class OKECFAAPLIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKECFAAPLIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN___C_CTOR_OFFSET))(this);
		}

		::OKECFAAPLIN* __cctor_b__33_0()
		{
			return ((::OKECFAAPLIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
