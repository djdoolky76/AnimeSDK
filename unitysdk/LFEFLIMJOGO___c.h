#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFEFLIMJOGO;
namespace System { class Object; }

#define LFEFLIMJOGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5A550)
#define LFEFLIMJOGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5A590)
#define LFEFLIMJOGO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FC5A5A0)

inline static constexpr unsigned int LFEFLIMJOGO___c_TypeDefinitionIndex = 30165;

	class LFEFLIMJOGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFEFLIMJOGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO___C_CTOR_OFFSET))(this);
		}

		::LFEFLIMJOGO* __cctor_b__18_0()
		{
			return ((::LFEFLIMJOGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFLIMJOGO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
