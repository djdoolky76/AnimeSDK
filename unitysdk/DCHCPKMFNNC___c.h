#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCHCPKMFNNC;
namespace System { class Object; }

#define DCHCPKMFNNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E143FC0)
#define DCHCPKMFNNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E144000)
#define DCHCPKMFNNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E144010)

inline static constexpr unsigned int DCHCPKMFNNC___c_TypeDefinitionIndex = 25219;

	class DCHCPKMFNNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCHCPKMFNNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC___C_CTOR_OFFSET))(this);
		}

		::DCHCPKMFNNC* __cctor_b__23_0()
		{
			return ((::DCHCPKMFNNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
