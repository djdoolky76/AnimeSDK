#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJPKKAKEFNB;
namespace System { class Object; }

#define PJPKKAKEFNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F492790)
#define PJPKKAKEFNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4927D0)
#define PJPKKAKEFNB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F4927E0)

inline static constexpr unsigned int PJPKKAKEFNB___c_TypeDefinitionIndex = 29414;

	class PJPKKAKEFNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPKKAKEFNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB___C_CTOR_OFFSET))(this);
		}

		::PJPKKAKEFNB* __cctor_b__33_0()
		{
			return ((::PJPKKAKEFNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPKKAKEFNB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
