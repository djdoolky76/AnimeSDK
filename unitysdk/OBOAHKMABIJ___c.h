#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOAHKMABIJ;
namespace System { class Object; }

#define OBOAHKMABIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A8960)
#define OBOAHKMABIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A8990)
#define OBOAHKMABIJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F0A89A0)

inline static constexpr unsigned int OBOAHKMABIJ___c_TypeDefinitionIndex = 34882;

	class OBOAHKMABIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBOAHKMABIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ___C_CTOR_OFFSET))(this);
		}

		::OBOAHKMABIJ* __cctor_b__33_0()
		{
			return ((::OBOAHKMABIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
