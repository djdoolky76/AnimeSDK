#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIDJBEDGBLE;
namespace System { class Object; }

#define PIDJBEDGBLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF17370)
#define PIDJBEDGBLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF173B0)
#define PIDJBEDGBLE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF173C0)

inline static constexpr unsigned int PIDJBEDGBLE___c_TypeDefinitionIndex = 26836;

	class PIDJBEDGBLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIDJBEDGBLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE___C_CTOR_OFFSET))(this);
		}

		::PIDJBEDGBLE* __cctor_b__28_0()
		{
			return ((::PIDJBEDGBLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
