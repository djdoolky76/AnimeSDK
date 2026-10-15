#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJBOAGIHAE;
namespace System { class Object; }

#define KPJBOAGIHAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88FE30)
#define KPJBOAGIHAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88FE70)
#define KPJBOAGIHAE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E88FE80)

inline static constexpr unsigned int KPJBOAGIHAE___c_TypeDefinitionIndex = 28118;

	class KPJBOAGIHAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJBOAGIHAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE___C_CTOR_OFFSET))(this);
		}

		::KPJBOAGIHAE* __cctor_b__23_0()
		{
			return ((::KPJBOAGIHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBOAGIHAE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
