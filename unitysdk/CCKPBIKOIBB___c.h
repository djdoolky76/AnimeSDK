#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKPBIKOIBB;
namespace System { class Object; }

#define CCKPBIKOIBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04B2B0)
#define CCKPBIKOIBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04B2F0)
#define CCKPBIKOIBB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E04B300)

inline static constexpr unsigned int CCKPBIKOIBB___c_TypeDefinitionIndex = 29193;

	class CCKPBIKOIBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCKPBIKOIBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB___C_CTOR_OFFSET))(this);
		}

		::CCKPBIKOIBB* __cctor_b__23_0()
		{
			return ((::CCKPBIKOIBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPBIKOIBB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
