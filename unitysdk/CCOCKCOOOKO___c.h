#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCOCKCOOOKO;
namespace System { class Object; }

#define CCOCKCOOOKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E050630)
#define CCOCKCOOOKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E050660)
#define CCOCKCOOOKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E050670)

inline static constexpr unsigned int CCOCKCOOOKO___c_TypeDefinitionIndex = 33993;

	class CCOCKCOOOKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOCKCOOOKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO___C_CTOR_OFFSET))(this);
		}

		::CCOCKCOOOKO* __cctor_b__28_0()
		{
			return ((::CCOCKCOOOKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCKCOOOKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
