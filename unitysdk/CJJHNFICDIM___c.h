#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJHNFICDIM;
namespace System { class Object; }

#define CJJHNFICDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B3020)
#define CJJHNFICDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B3050)
#define CJJHNFICDIM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F3B3060)

inline static constexpr unsigned int CJJHNFICDIM___c_TypeDefinitionIndex = 28734;

	class CJJHNFICDIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12FB0);
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
