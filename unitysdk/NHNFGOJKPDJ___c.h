#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHNFGOJKPDJ;
namespace System { class Object; }

#define NHNFGOJKPDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5C40)
#define NHNFGOJKPDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5C80)
#define NHNFGOJKPDJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAF5C90)

inline static constexpr unsigned int NHNFGOJKPDJ___c_TypeDefinitionIndex = 27620;

	class NHNFGOJKPDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHNFGOJKPDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ___C_CTOR_OFFSET))(this);
		}

		::NHNFGOJKPDJ* __cctor_b__18_0()
		{
			return ((::NHNFGOJKPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNFGOJKPDJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
