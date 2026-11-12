#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMKNOLPFJDN;
namespace System { class Object; }

#define NMKNOLPFJDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F06B550)
#define NMKNOLPFJDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06B590)
#define NMKNOLPFJDN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F06B5A0)

inline static constexpr unsigned int NMKNOLPFJDN___c_TypeDefinitionIndex = 32830;

	class NMKNOLPFJDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x719D0);
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
