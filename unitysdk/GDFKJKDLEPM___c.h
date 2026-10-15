#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDFKJKDLEPM;
namespace System { class Object; }

#define GDFKJKDLEPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41AFD0)
#define GDFKJKDLEPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41B010)
#define GDFKJKDLEPM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E41B020)

inline static constexpr unsigned int GDFKJKDLEPM___c_TypeDefinitionIndex = 32482;

	class GDFKJKDLEPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDFKJKDLEPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFKJKDLEPM___C_CTOR_OFFSET))(this);
		}

		::GDFKJKDLEPM* __cctor_b__53_0()
		{
			return ((::GDFKJKDLEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFKJKDLEPM___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
