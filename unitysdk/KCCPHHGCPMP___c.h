#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCCPHHGCPMP;
namespace System { class Object; }

#define KCCPHHGCPMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203BB4B0)
#define KCCPHHGCPMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203BB4F0)
#define KCCPHHGCPMP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203BB500)

inline static constexpr unsigned int KCCPHHGCPMP___c_TypeDefinitionIndex = 30290;

	class KCCPHHGCPMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A080);
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
