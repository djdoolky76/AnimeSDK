#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBEKJKNCMCL;
namespace System { class Object; }

#define KBEKJKNCMCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB028E0)
#define KBEKJKNCMCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB02920)
#define KBEKJKNCMCL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB02930)

inline static constexpr unsigned int KBEKJKNCMCL___c_TypeDefinitionIndex = 30004;

	class KBEKJKNCMCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DD60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEKJKNCMCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL___C_CTOR_OFFSET))(this);
		}

		::KBEKJKNCMCL* __cctor_b__23_0()
		{
			return ((::KBEKJKNCMCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEKJKNCMCL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
