#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBNGNLBAOAG;
class JNBAPNPIADL;

#define GIFHCDDPEAI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A289C0)
#define GIFHCDDPEAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A28AA0)

inline static constexpr unsigned int GIFHCDDPEAI_TypeDefinitionIndex = 61411;

	class GIFHCDDPEAI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFHCDDPEAI_CTOR_OFFSET))(this);
		}

		static ::DBNGNLBAOAG* BPLPBPMEODA(::JNBAPNPIADL* a1)
		{
			return ((::DBNGNLBAOAG*(*)(::JNBAPNPIADL*))((::PBYTE)hIl2Cpp + GIFHCDDPEAI_BPLPBPMEODA_OFFSET))(a1);
		}

	};
