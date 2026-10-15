#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBAOKHOJJP;
namespace System { class Object; }

#define AGBAOKHOJJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F93D0)
#define AGBAOKHOJJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F9410)
#define AGBAOKHOJJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0F9420)

inline static constexpr unsigned int AGBAOKHOJJP___c_TypeDefinitionIndex = 32095;

	class AGBAOKHOJJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBAOKHOJJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP___C_CTOR_OFFSET))(this);
		}

		::AGBAOKHOJJP* __cctor_b__23_0()
		{
			return ((::AGBAOKHOJJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
