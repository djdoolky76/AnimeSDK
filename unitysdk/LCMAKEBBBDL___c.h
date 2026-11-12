#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCMAKEBBBDL;
namespace System { class Object; }

#define LCMAKEBBBDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2D320)
#define LCMAKEBBBDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2D360)
#define LCMAKEBBBDL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC2D370)

inline static constexpr unsigned int LCMAKEBBBDL___c_TypeDefinitionIndex = 29773;

	class LCMAKEBBBDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCMAKEBBBDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL___C_CTOR_OFFSET))(this);
		}

		::LCMAKEBBBDL* __cctor_b__28_0()
		{
			return ((::LCMAKEBBBDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMAKEBBBDL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
