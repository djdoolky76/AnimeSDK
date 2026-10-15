#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLGDBJAMIPN;

#define JLGDBJAMIPN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2447F0)
#define JLGDBJAMIPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB244860)
#define JLGDBJAMIPN_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xB244870)

inline static constexpr unsigned int JLGDBJAMIPN_TypeDefinitionIndex = 65989;

	class JLGDBJAMIPN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGDBJAMIPN_CTOR_OFFSET))(this);
		}

		static ::JLGDBJAMIPN* BPLPBPMEODA()
		{
			return ((::JLGDBJAMIPN*(*)())((::PBYTE)hIl2Cpp + JLGDBJAMIPN_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGDBJAMIPN_OKPLPEELPBC_OFFSET))(this);
		}

	};
