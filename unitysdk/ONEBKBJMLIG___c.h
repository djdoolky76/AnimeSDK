#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONEBKBJMLIG;
namespace System { class Object; }

#define ONEBKBJMLIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC29B30)
#define ONEBKBJMLIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC29B60)
#define ONEBKBJMLIG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FC29B70)

inline static constexpr unsigned int ONEBKBJMLIG___c_TypeDefinitionIndex = 31451;

	class ONEBKBJMLIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x281E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONEBKBJMLIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG___C_CTOR_OFFSET))(this);
		}

		::ONEBKBJMLIG* __cctor_b__18_0()
		{
			return ((::ONEBKBJMLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBKBJMLIG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
