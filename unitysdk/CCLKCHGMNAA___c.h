#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCLKCHGMNAA;
namespace System { class Object; }

#define CCLKCHGMNAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F33E610)
#define CCLKCHGMNAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F33E650)
#define CCLKCHGMNAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F33E660)

inline static constexpr unsigned int CCLKCHGMNAA___c_TypeDefinitionIndex = 34700;

	class CCLKCHGMNAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCLKCHGMNAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA___C_CTOR_OFFSET))(this);
		}

		::CCLKCHGMNAA* __cctor_b__28_0()
		{
			return ((::CCLKCHGMNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLKCHGMNAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
