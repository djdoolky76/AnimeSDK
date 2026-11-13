#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFMAONOMPLM;
namespace System { class Object; }

#define KFMAONOMPLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9B2240)
#define KFMAONOMPLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B2280)
#define KFMAONOMPLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9B2290)

inline static constexpr unsigned int KFMAONOMPLM___c_TypeDefinitionIndex = 34497;

	class KFMAONOMPLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMAONOMPLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM___C_CTOR_OFFSET))(this);
		}

		::KFMAONOMPLM* __cctor_b__28_0()
		{
			return ((::KFMAONOMPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
