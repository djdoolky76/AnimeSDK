#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKPBIKOIBB;
namespace System { class Object; }

#define CCKPBIKOIBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA1A0)
#define CCKPBIKOIBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBA1E0)
#define CCKPBIKOIBB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FEBA1F0)

inline static constexpr unsigned int CCKPBIKOIBB___c_TypeDefinitionIndex = 29837;

	class CCKPBIKOIBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x611B0);
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
