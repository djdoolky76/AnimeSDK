#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NANCKMNBPCB;
namespace System { class Object; }

#define NANCKMNBPCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20151710)
#define NANCKMNBPCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20151740)
#define NANCKMNBPCB___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x20151750)

inline static constexpr unsigned int NANCKMNBPCB___c_TypeDefinitionIndex = 32324;

	class NANCKMNBPCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NANCKMNBPCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANCKMNBPCB___C_CTOR_OFFSET))(this);
		}

		::NANCKMNBPCB* __cctor_b__63_0()
		{
			return ((::NANCKMNBPCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NANCKMNBPCB___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
