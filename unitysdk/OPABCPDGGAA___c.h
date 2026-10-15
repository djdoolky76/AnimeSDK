#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPABCPDGGAA;
namespace System { class Object; }

#define OPABCPDGGAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAF420)
#define OPABCPDGGAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAF460)
#define OPABCPDGGAA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEAF470)

inline static constexpr unsigned int OPABCPDGGAA___c_TypeDefinitionIndex = 28403;

	class OPABCPDGGAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPABCPDGGAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA___C_CTOR_OFFSET))(this);
		}

		::OPABCPDGGAA* __cctor_b__33_0()
		{
			return ((::OPABCPDGGAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
