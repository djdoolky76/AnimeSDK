#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBEFNNHILCB;
namespace System { class Object; }

#define NBEFNNHILCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACF9D0)
#define NBEFNNHILCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACFA10)
#define NBEFNNHILCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EACFA20)

inline static constexpr unsigned int NBEFNNHILCB___c_TypeDefinitionIndex = 30694;

	class NBEFNNHILCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEFNNHILCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB___C_CTOR_OFFSET))(this);
		}

		::NBEFNNHILCB* __cctor_b__28_0()
		{
			return ((::NBEFNNHILCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEFNNHILCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
