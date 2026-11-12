#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAOONIMHKLA;
namespace System { class Object; }

#define OAOONIMHKLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F09EC30)
#define OAOONIMHKLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F09EC70)
#define OAOONIMHKLA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F09EC80)

inline static constexpr unsigned int OAOONIMHKLA___c_TypeDefinitionIndex = 27153;

	class OAOONIMHKLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOONIMHKLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA___C_CTOR_OFFSET))(this);
		}

		::OAOONIMHKLA* __cctor_b__23_0()
		{
			return ((::OAOONIMHKLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOONIMHKLA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
