#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALGDCPHADFA;
namespace System { class Object; }

#define ALGDCPHADFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7C8580)
#define ALGDCPHADFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C85C0)
#define ALGDCPHADFA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F7C85D0)

inline static constexpr unsigned int ALGDCPHADFA___c_TypeDefinitionIndex = 32906;

	class ALGDCPHADFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALGDCPHADFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA___C_CTOR_OFFSET))(this);
		}

		::ALGDCPHADFA* __cctor_b__48_0()
		{
			return ((::ALGDCPHADFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDCPHADFA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
