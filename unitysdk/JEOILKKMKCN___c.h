#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEOILKKMKCN;
namespace System { class Object; }

#define JEOILKKMKCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F4190)
#define JEOILKKMKCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F41D0)
#define JEOILKKMKCN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6F41E0)

inline static constexpr unsigned int JEOILKKMKCN___c_TypeDefinitionIndex = 28493;

	class JEOILKKMKCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOILKKMKCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOILKKMKCN___C_CTOR_OFFSET))(this);
		}

		::JEOILKKMKCN* __cctor_b__38_0()
		{
			return ((::JEOILKKMKCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOILKKMKCN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
