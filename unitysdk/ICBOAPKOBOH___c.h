#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICBOAPKOBOH;
namespace System { class Object; }

#define ICBOAPKOBOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1E70)
#define ICBOAPKOBOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1EB0)
#define ICBOAPKOBOH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5F1EC0)

inline static constexpr unsigned int ICBOAPKOBOH___c_TypeDefinitionIndex = 32558;

	class ICBOAPKOBOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBOAPKOBOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOAPKOBOH___C_CTOR_OFFSET))(this);
		}

		::ICBOAPKOBOH* __cctor_b__43_0()
		{
			return ((::ICBOAPKOBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOAPKOBOH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
