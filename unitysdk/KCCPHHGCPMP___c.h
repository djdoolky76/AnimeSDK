#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCCPHHGCPMP;
namespace System { class Object; }

#define KCCPHHGCPMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C5900)
#define KCCPHHGCPMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C5940)
#define KCCPHHGCPMP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7C5950)

inline static constexpr unsigned int KCCPHHGCPMP___c_TypeDefinitionIndex = 29532;

	class KCCPHHGCPMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xED70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCCPHHGCPMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP___C_CTOR_OFFSET))(this);
		}

		::KCCPHHGCPMP* __cctor_b__23_0()
		{
			return ((::KCCPHHGCPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCPHHGCPMP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
