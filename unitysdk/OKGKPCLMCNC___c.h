#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKGKPCLMCNC;
namespace System { class Object; }

#define OKGKPCLMCNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6CD10)
#define OKGKPCLMCNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6CD40)
#define OKGKPCLMCNC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE6CD50)

inline static constexpr unsigned int OKGKPCLMCNC___c_TypeDefinitionIndex = 25424;

	class OKGKPCLMCNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKGKPCLMCNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGKPCLMCNC___C_CTOR_OFFSET))(this);
		}

		::OKGKPCLMCNC* __cctor_b__48_0()
		{
			return ((::OKGKPCLMCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGKPCLMCNC___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
