#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMFGJGOLNG;
namespace System { class Object; }

#define AIMFGJGOLNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27F550)
#define AIMFGJGOLNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27F590)
#define AIMFGJGOLNG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E27F5A0)

inline static constexpr unsigned int AIMFGJGOLNG___c_TypeDefinitionIndex = 31140;

	class AIMFGJGOLNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIMFGJGOLNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG___C_CTOR_OFFSET))(this);
		}

		::AIMFGJGOLNG* __cctor_b__28_0()
		{
			return ((::AIMFGJGOLNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
