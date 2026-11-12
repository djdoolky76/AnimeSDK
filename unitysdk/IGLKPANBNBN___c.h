#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLKPANBNBN;
namespace System { class Object; }

#define IGLKPANBNBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F971BB0)
#define IGLKPANBNBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F971BF0)
#define IGLKPANBNBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F971C00)

inline static constexpr unsigned int IGLKPANBNBN___c_TypeDefinitionIndex = 30146;

	class IGLKPANBNBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLKPANBNBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN___C_CTOR_OFFSET))(this);
		}

		::IGLKPANBNBN* __cctor_b__23_0()
		{
			return ((::IGLKPANBNBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLKPANBNBN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
