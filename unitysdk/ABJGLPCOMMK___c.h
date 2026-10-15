#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABJGLPCOMMK;
namespace System { class Object; }

#define ABJGLPCOMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA00D0)
#define ABJGLPCOMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA0110)
#define ABJGLPCOMMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDA0120)

inline static constexpr unsigned int ABJGLPCOMMK___c_TypeDefinitionIndex = 25523;

	class ABJGLPCOMMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJGLPCOMMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK___C_CTOR_OFFSET))(this);
		}

		::ABJGLPCOMMK* __cctor_b__23_0()
		{
			return ((::ABJGLPCOMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGLPCOMMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
