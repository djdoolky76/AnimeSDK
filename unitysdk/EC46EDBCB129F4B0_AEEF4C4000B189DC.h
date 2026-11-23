#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC46EDBCB129F4B0;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EC46EDBCB129F4B0_AEEF4C4000B189DC_EDD710379DC61B49_OFFSET UNITYSDK_OFFSET(0x3A80260)
#define EC46EDBCB129F4B0_AEEF4C4000B189DC_FEB632485607B5A6_OFFSET UNITYSDK_OFFSET(0x3A80120)
#define EC46EDBCB129F4B0_AEEF4C4000B189DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC46EDBCB129F4B0_AEEF4C4000B189DC_TypeDefinitionIndex = 11939;

class EC46EDBCB129F4B0_AEEF4C4000B189DC : public ::System::Object
{
public:
	::System::String* F51E83A249C13FAD; // 0x10
	::EC46EDBCB129F4B0* A544919C800E2923; // 0x18
	::System::Action_1<::System::Int32>* E8981049E69F2A59; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_AEEF4C4000B189DC__CTOR_OFFSET))(this);
	}

	::System::Void FEB632485607B5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_AEEF4C4000B189DC_FEB632485607B5A6_OFFSET))(this);
	}

	::System::Void EDD710379DC61B49(::System::Int32 FD6122823615D1AB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_AEEF4C4000B189DC_EDD710379DC61B49_OFFSET))(this, FD6122823615D1AB);
	}
};
