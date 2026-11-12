#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMDJAFAHKEL;
namespace System { class Object; }

#define AMDJAFAHKEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7D4D80)
#define AMDJAFAHKEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D4DC0)
#define AMDJAFAHKEL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7D4DD0)

inline static constexpr unsigned int AMDJAFAHKEL___c_TypeDefinitionIndex = 29137;

	class AMDJAFAHKEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ECE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMDJAFAHKEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL___C_CTOR_OFFSET))(this);
		}

		::AMDJAFAHKEL* __cctor_b__38_0()
		{
			return ((::AMDJAFAHKEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDJAFAHKEL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
