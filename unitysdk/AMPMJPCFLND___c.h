#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMPMJPCFLND;
namespace System { class Object; }

#define AMPMJPCFLND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FA550)
#define AMPMJPCFLND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FA590)
#define AMPMJPCFLND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4FA5A0)

inline static constexpr unsigned int AMPMJPCFLND___c_TypeDefinitionIndex = 30195;

	class AMPMJPCFLND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMPMJPCFLND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND___C_CTOR_OFFSET))(this);
		}

		::AMPMJPCFLND* __cctor_b__28_0()
		{
			return ((::AMPMJPCFLND*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
