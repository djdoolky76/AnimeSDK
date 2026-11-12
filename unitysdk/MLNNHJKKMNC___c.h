#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLNNHJKKMNC;
namespace System { class Object; }

#define MLNNHJKKMNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBB0C0)
#define MLNNHJKKMNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBB0F0)
#define MLNNHJKKMNC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FDBB100)

inline static constexpr unsigned int MLNNHJKKMNC___c_TypeDefinitionIndex = 26543;

	class MLNNHJKKMNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLNNHJKKMNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC___C_CTOR_OFFSET))(this);
		}

		::MLNNHJKKMNC* __cctor_b__18_0()
		{
			return ((::MLNNHJKKMNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
