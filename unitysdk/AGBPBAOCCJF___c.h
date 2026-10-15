#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBPBAOCCJF;
namespace System { class Object; }

#define AGBPBAOCCJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA400)
#define AGBPBAOCCJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA440)
#define AGBPBAOCCJF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0FA450)

inline static constexpr unsigned int AGBPBAOCCJF___c_TypeDefinitionIndex = 31681;

	class AGBPBAOCCJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBPBAOCCJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF___C_CTOR_OFFSET))(this);
		}

		::AGBPBAOCCJF* __cctor_b__23_0()
		{
			return ((::AGBPBAOCCJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
