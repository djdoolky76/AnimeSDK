#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOBJKAMNNPI;
namespace System { class Object; }

#define EOBJKAMNNPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD7F170)
#define EOBJKAMNNPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7F1B0)
#define EOBJKAMNNPI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FD7F1C0)

inline static constexpr unsigned int EOBJKAMNNPI___c_TypeDefinitionIndex = 31135;

	class EOBJKAMNNPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBJKAMNNPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI___C_CTOR_OFFSET))(this);
		}

		::EOBJKAMNNPI* __cctor_b__43_0()
		{
			return ((::EOBJKAMNNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBJKAMNNPI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
