#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMGABLBKJMC;
namespace System { class Object; }

#define GMGABLBKJMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E32B0)
#define GMGABLBKJMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E32F0)
#define GMGABLBKJMC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7E3300)

inline static constexpr unsigned int GMGABLBKJMC___c_TypeDefinitionIndex = 29363;

	class GMGABLBKJMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMGABLBKJMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC___C_CTOR_OFFSET))(this);
		}

		::GMGABLBKJMC* __cctor_b__28_0()
		{
			return ((::GMGABLBKJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGABLBKJMC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
