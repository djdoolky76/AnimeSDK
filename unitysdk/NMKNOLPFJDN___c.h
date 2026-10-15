#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMKNOLPFJDN;
namespace System { class Object; }

#define NMKNOLPFJDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4BA90)
#define NMKNOLPFJDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4BAD0)
#define NMKNOLPFJDN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB4BAE0)

inline static constexpr unsigned int NMKNOLPFJDN___c_TypeDefinitionIndex = 31917;

	class NMKNOLPFJDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKNOLPFJDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN___C_CTOR_OFFSET))(this);
		}

		::NMKNOLPFJDN* __cctor_b__38_0()
		{
			return ((::NMKNOLPFJDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOLPFJDN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
