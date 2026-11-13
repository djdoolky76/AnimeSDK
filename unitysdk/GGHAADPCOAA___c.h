#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHAADPCOAA;
namespace System { class Object; }

#define GGHAADPCOAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202685A0)
#define GGHAADPCOAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202685E0)
#define GGHAADPCOAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202685F0)

inline static constexpr unsigned int GGHAADPCOAA___c_TypeDefinitionIndex = 29771;

	class GGHAADPCOAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHAADPCOAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA___C_CTOR_OFFSET))(this);
		}

		::GGHAADPCOAA* __cctor_b__28_0()
		{
			return ((::GGHAADPCOAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHAADPCOAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
