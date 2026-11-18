#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_COLORHSV_CBPFINCLIAK_HCPDFOABAKP_OFFSET UNITYSDK_OFFSET(0x606AB0)
#define MOLEMOLE_COLORHSV_CBPFINCLIAK_JMDANJCGAKC_OFFSET UNITYSDK_OFFSET(0x6069C0)
#define MOLEMOLE_COLORHSV_CBPFINCLIAK__CTOR_OFFSET UNITYSDK_OFFSET(0x6069B0)

namespace MoleMole
{
	inline static constexpr unsigned int ColorHSV_CBPFINCLIAK_TypeDefinitionIndex = 60316;

	struct alignas(4) ColorHSV_CBPFINCLIAK
	{
		::System::Single DMIAICJPPDL; // 0x10
		::System::Single EMIKCAHJLGB; // 0x14
		::System::Single HFMHOELKCAJ; // 0x18

		::System::Void _ctor(::System::Single DMIAICJPPDL, ::System::Single EMIKCAHJLGB, ::System::Single HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_CBPFINCLIAK__CTOR_OFFSET))(this, DMIAICJPPDL, EMIKCAHJLGB, HFMHOELKCAJ);
		}

		::System::Boolean JMDANJCGAKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_CBPFINCLIAK_JMDANJCGAKC_OFFSET))(this);
		}

		/*
		::System::Boolean HCPDFOABAKP(::MoleMole::ColorHSV_CBPFINCLIAK& LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ColorHSV_CBPFINCLIAK&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORHSV_CBPFINCLIAK_HCPDFOABAKP_OFFSET))(this, LIBPKNHDIGP);
		}
		*/
	};
}
