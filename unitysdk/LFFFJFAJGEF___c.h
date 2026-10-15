#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFFFJFAJGEF;
namespace System { class Object; }

#define LFFFJFAJGEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93C1C0)
#define LFFFJFAJGEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93C200)
#define LFFFJFAJGEF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E93C210)

inline static constexpr unsigned int LFFFJFAJGEF___c_TypeDefinitionIndex = 31569;

	class LFFFJFAJGEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFFFJFAJGEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF___C_CTOR_OFFSET))(this);
		}

		::LFFFJFAJGEF* __cctor_b__18_0()
		{
			return ((::LFFFJFAJGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFJFAJGEF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
