#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOLCPKAMCEM;
namespace System { class Object; }

#define DOLCPKAMCEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7AD0)
#define DOLCPKAMCEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7B10)
#define DOLCPKAMCEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D7B20)

inline static constexpr unsigned int DOLCPKAMCEM___c_TypeDefinitionIndex = 29854;

	class DOLCPKAMCEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOLCPKAMCEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM___C_CTOR_OFFSET))(this);
		}

		::DOLCPKAMCEM* __cctor_b__23_0()
		{
			return ((::DOLCPKAMCEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
