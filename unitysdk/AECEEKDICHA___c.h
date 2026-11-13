#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AECEEKDICHA;
namespace System { class Object; }

#define AECEEKDICHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200A3DB0)
#define AECEEKDICHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200A3DF0)
#define AECEEKDICHA___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x200A3E00)

inline static constexpr unsigned int AECEEKDICHA___c_TypeDefinitionIndex = 27887;

	class AECEEKDICHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AECEEKDICHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECEEKDICHA___C_CTOR_OFFSET))(this);
		}

		::AECEEKDICHA* __cctor_b__53_0()
		{
			return ((::AECEEKDICHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECEEKDICHA___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
