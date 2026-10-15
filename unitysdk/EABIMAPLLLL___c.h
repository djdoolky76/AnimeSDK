#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABIMAPLLLL;
namespace System { class Object; }

#define EABIMAPLLLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4F40)
#define EABIMAPLLLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4F70)
#define EABIMAPLLLL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1F4F80)

inline static constexpr unsigned int EABIMAPLLLL___c_TypeDefinitionIndex = 30906;

	class EABIMAPLLLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EABIMAPLLLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL___C_CTOR_OFFSET))(this);
		}

		::EABIMAPLLLL* __cctor_b__23_0()
		{
			return ((::EABIMAPLLLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABIMAPLLLL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
