#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHGFFOEJEBM;
namespace System { class Object; }

#define PHGFFOEJEBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20257A60)
#define PHGFFOEJEBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20257AA0)
#define PHGFFOEJEBM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20257AB0)

inline static constexpr unsigned int PHGFFOEJEBM___c_TypeDefinitionIndex = 30549;

	class PHGFFOEJEBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHGFFOEJEBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM___C_CTOR_OFFSET))(this);
		}

		::PHGFFOEJEBM* __cctor_b__28_0()
		{
			return ((::PHGFFOEJEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
