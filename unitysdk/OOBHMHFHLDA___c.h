#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOBHMHFHLDA;
namespace System { class Object; }

#define OOBHMHFHLDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F19E4C0)
#define OOBHMHFHLDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19E500)
#define OOBHMHFHLDA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F19E510)

inline static constexpr unsigned int OOBHMHFHLDA___c_TypeDefinitionIndex = 30391;

	class OOBHMHFHLDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x279B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBHMHFHLDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA___C_CTOR_OFFSET))(this);
		}

		::OOBHMHFHLDA* __cctor_b__23_0()
		{
			return ((::OOBHMHFHLDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBHMHFHLDA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
