#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;

#define APDMIIEDMLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B9B060)
#define APDMIIEDMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9B050)

inline static constexpr unsigned int APDMIIEDMLI_TypeDefinitionIndex = 59937;

	class APDMIIEDMLI : public ::System::Object
	{
	public:
		static ::APDMIIEDMLI_CFHOMFLPNNO** StaticGet_IBLOPKIDEBE()
		{
			return (::APDMIIEDMLI_CFHOMFLPNNO**)UnitySDK::FromName("", "APDMIIEDMLI")->GetStaticField(0x1980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDMIIEDMLI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APDMIIEDMLI_CCTOR_OFFSET))();
		}

	};
