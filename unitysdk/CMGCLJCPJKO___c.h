#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMGCLJCPJKO;
namespace System { class Object; }

#define CMGCLJCPJKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D46F0)
#define CMGCLJCPJKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D4730)
#define CMGCLJCPJKO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0D4740)

inline static constexpr unsigned int CMGCLJCPJKO___c_TypeDefinitionIndex = 30646;

	class CMGCLJCPJKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMGCLJCPJKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO___C_CTOR_OFFSET))(this);
		}

		::CMGCLJCPJKO* __cctor_b__23_0()
		{
			return ((::CMGCLJCPJKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGCLJCPJKO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
