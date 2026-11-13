#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDGHLGHJDMC;
namespace System { class Object; }

#define KDGHLGHJDMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C84D0)
#define KDGHLGHJDMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203C8510)
#define KDGHLGHJDMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203C8520)

inline static constexpr unsigned int KDGHLGHJDMC___c_TypeDefinitionIndex = 30375;

	class KDGHLGHJDMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDGHLGHJDMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC___C_CTOR_OFFSET))(this);
		}

		::KDGHLGHJDMC* __cctor_b__23_0()
		{
			return ((::KDGHLGHJDMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
