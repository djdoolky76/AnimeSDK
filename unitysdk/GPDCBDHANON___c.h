#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPDCBDHANON;
namespace System { class Object; }

#define GPDCBDHANON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCFDE80)
#define GPDCBDHANON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCFDEB0)
#define GPDCBDHANON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCFDEC0)

inline static constexpr unsigned int GPDCBDHANON___c_TypeDefinitionIndex = 28433;

	class GPDCBDHANON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDCBDHANON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON___C_CTOR_OFFSET))(this);
		}

		::GPDCBDHANON* __cctor_b__23_0()
		{
			return ((::GPDCBDHANON*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
