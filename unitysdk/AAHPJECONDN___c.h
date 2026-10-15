#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAHPJECONDN;
namespace System { class Object; }

#define AAHPJECONDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8DED0)
#define AAHPJECONDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8DF10)
#define AAHPJECONDN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD8DF20)

inline static constexpr unsigned int AAHPJECONDN___c_TypeDefinitionIndex = 32005;

	class AAHPJECONDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAHPJECONDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN___C_CTOR_OFFSET))(this);
		}

		::AAHPJECONDN* __cctor_b__23_0()
		{
			return ((::AAHPJECONDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPJECONDN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
