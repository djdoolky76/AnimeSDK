#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEGBKMIIJOA;
namespace System { class Object; }

#define LEGBKMIIJOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E900590)
#define LEGBKMIIJOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9005D0)
#define LEGBKMIIJOA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E9005E0)

inline static constexpr unsigned int LEGBKMIIJOA___c_TypeDefinitionIndex = 28340;

	class LEGBKMIIJOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x315E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGBKMIIJOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGBKMIIJOA___C_CTOR_OFFSET))(this);
		}

		::LEGBKMIIJOA* __cctor_b__58_0()
		{
			return ((::LEGBKMIIJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGBKMIIJOA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
