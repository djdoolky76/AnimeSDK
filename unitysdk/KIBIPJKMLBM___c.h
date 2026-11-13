#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIBIPJKMLBM;
namespace System { class Object; }

#define KIBIPJKMLBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDCB80)
#define KIBIPJKMLBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDCBB0)
#define KIBIPJKMLBM___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1FDDCBC0)

inline static constexpr unsigned int KIBIPJKMLBM___c_TypeDefinitionIndex = 35665;

	class KIBIPJKMLBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIBIPJKMLBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBIPJKMLBM___C_CTOR_OFFSET))(this);
		}

		::KIBIPJKMLBM* __cctor_b__63_0()
		{
			return ((::KIBIPJKMLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBIPJKMLBM___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
