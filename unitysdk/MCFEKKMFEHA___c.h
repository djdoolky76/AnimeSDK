#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCFEKKMFEHA;
namespace System { class Object; }

#define MCFEKKMFEHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4D60)
#define MCFEKKMFEHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4DA0)
#define MCFEKKMFEHA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9F4DB0)

inline static constexpr unsigned int MCFEKKMFEHA___c_TypeDefinitionIndex = 33112;

	class MCFEKKMFEHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFEKKMFEHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA___C_CTOR_OFFSET))(this);
		}

		::MCFEKKMFEHA* __cctor_b__18_0()
		{
			return ((::MCFEKKMFEHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFEKKMFEHA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
