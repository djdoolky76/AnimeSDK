#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEPHKJFAJPP;
namespace System { class Object; }

#define MEPHKJFAJPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA13E30)
#define MEPHKJFAJPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA13E70)
#define MEPHKJFAJPP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EA13E80)

inline static constexpr unsigned int MEPHKJFAJPP___c_TypeDefinitionIndex = 25324;

	class MEPHKJFAJPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEPHKJFAJPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP___C_CTOR_OFFSET))(this);
		}

		::MEPHKJFAJPP* __cctor_b__53_0()
		{
			return ((::MEPHKJFAJPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
