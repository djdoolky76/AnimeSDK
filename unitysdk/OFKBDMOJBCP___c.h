#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFKBDMOJBCP;
namespace System { class Object; }

#define OFKBDMOJBCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F20B460)
#define OFKBDMOJBCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F20B490)
#define OFKBDMOJBCP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F20B4A0)

inline static constexpr unsigned int OFKBDMOJBCP___c_TypeDefinitionIndex = 32428;

	class OFKBDMOJBCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFKBDMOJBCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP___C_CTOR_OFFSET))(this);
		}

		::OFKBDMOJBCP* __cctor_b__18_0()
		{
			return ((::OFKBDMOJBCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
