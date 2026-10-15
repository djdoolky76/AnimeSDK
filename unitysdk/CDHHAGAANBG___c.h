#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDHHAGAANBG;
namespace System { class Object; }

#define CDHHAGAANBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0852A0)
#define CDHHAGAANBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0852D0)
#define CDHHAGAANBG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0852E0)

inline static constexpr unsigned int CDHHAGAANBG___c_TypeDefinitionIndex = 32181;

	class CDHHAGAANBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDHHAGAANBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG___C_CTOR_OFFSET))(this);
		}

		::CDHHAGAANBG* __cctor_b__18_0()
		{
			return ((::CDHHAGAANBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHHAGAANBG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
