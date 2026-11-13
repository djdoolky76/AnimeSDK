#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJHNFICDIM;
namespace System { class Object; }

#define CJJHNFICDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2058CC60)
#define CJJHNFICDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2058CC90)
#define CJJHNFICDIM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x2058CCA0)

inline static constexpr unsigned int CJJHNFICDIM___c_TypeDefinitionIndex = 28734;

	class CJJHNFICDIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJJHNFICDIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJHNFICDIM___C_CTOR_OFFSET))(this);
		}

		::CJJHNFICDIM* __cctor_b__53_0()
		{
			return ((::CJJHNFICDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJHNFICDIM___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
