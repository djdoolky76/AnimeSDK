#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPBKMEJJDEL;
namespace System { class Object; }

#define JPBKMEJJDEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D92C0)
#define JPBKMEJJDEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9300)
#define JPBKMEJJDEL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F8D9310)

inline static constexpr unsigned int JPBKMEJJDEL___c_TypeDefinitionIndex = 28314;

	class JPBKMEJJDEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPBKMEJJDEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBKMEJJDEL___C_CTOR_OFFSET))(this);
		}

		::JPBKMEJJDEL* __cctor_b__53_0()
		{
			return ((::JPBKMEJJDEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBKMEJJDEL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
