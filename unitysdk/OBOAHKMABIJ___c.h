#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOAHKMABIJ;
namespace System { class Object; }

#define OBOAHKMABIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA3E00)
#define OBOAHKMABIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA3E30)
#define OBOAHKMABIJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDA3E40)

inline static constexpr unsigned int OBOAHKMABIJ___c_TypeDefinitionIndex = 34882;

	class OBOAHKMABIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC100);
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
