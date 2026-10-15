#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCFJFAFJACN;
namespace System { class Object; }

#define JCFJFAFJACN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3740)
#define JCFJFAFJACN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3780)
#define JCFJFAFJACN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6D3790)

inline static constexpr unsigned int JCFJFAFJACN___c_TypeDefinitionIndex = 32751;

	class JCFJFAFJACN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJFAFJACN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN___C_CTOR_OFFSET))(this);
		}

		::JCFJFAFJACN* __cctor_b__23_0()
		{
			return ((::JCFJFAFJACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
