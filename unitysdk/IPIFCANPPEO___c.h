#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPIFCANPPEO;
namespace System { class Object; }

#define IPIFCANPPEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E4140)
#define IPIFCANPPEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E4170)
#define IPIFCANPPEO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6E4180)

inline static constexpr unsigned int IPIFCANPPEO___c_TypeDefinitionIndex = 33540;

	class IPIFCANPPEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIFCANPPEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO___C_CTOR_OFFSET))(this);
		}

		::IPIFCANPPEO* __cctor_b__18_0()
		{
			return ((::IPIFCANPPEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIFCANPPEO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
