#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIAOCOLLCD;
namespace System { class Object; }

#define GFIAOCOLLCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20082A30)
#define GFIAOCOLLCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20082A60)
#define GFIAOCOLLCD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20082A70)

inline static constexpr unsigned int GFIAOCOLLCD___c_TypeDefinitionIndex = 35200;

	class GFIAOCOLLCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFIAOCOLLCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD___C_CTOR_OFFSET))(this);
		}

		::GFIAOCOLLCD* __cctor_b__28_0()
		{
			return ((::GFIAOCOLLCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIAOCOLLCD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
