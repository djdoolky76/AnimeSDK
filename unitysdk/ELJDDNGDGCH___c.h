#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJDDNGDGCH;
namespace System { class Object; }

#define ELJDDNGDGCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206CA4D0)
#define ELJDDNGDGCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206CA510)
#define ELJDDNGDGCH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206CA520)

inline static constexpr unsigned int ELJDDNGDGCH___c_TypeDefinitionIndex = 31420;

	class ELJDDNGDGCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJDDNGDGCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH___C_CTOR_OFFSET))(this);
		}

		::ELJDDNGDGCH* __cctor_b__23_0()
		{
			return ((::ELJDDNGDGCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
