#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNHCHDGBAB;
namespace System { class Object; }

#define ONNHCHDGBAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1993E0)
#define ONNHCHDGBAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F199420)
#define ONNHCHDGBAB___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1F199430)

inline static constexpr unsigned int ONNHCHDGBAB___c_TypeDefinitionIndex = 28302;

	class ONNHCHDGBAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNHCHDGBAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHCHDGBAB___C_CTOR_OFFSET))(this);
		}

		::ONNHCHDGBAB* __cctor_b__52_0()
		{
			return ((::ONNHCHDGBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHCHDGBAB___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
