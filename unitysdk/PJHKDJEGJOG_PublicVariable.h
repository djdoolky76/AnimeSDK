#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJHKDJEGJOG_PublicVariable_BJOBKCKNEJI.h"
#include "unitysdk/System/ValueType.h"

class DLIOMJJPBOC;
namespace System { class String; }

#define PJHKDJEGJOG_PUBLICVARIABLE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7AFF30)
#define PJHKDJEGJOG_PUBLICVARIABLE_GET_VARBOOL_OFFSET UNITYSDK_OFFSET(0x7AFEC0)
#define PJHKDJEGJOG_PUBLICVARIABLE_NLKAMNCKHOB_OFFSET UNITYSDK_OFFSET(0x7AFFC0)
#define PJHKDJEGJOG_PUBLICVARIABLE_SET_VARBOOL_OFFSET UNITYSDK_OFFSET(0x7AFED0)
#define PJHKDJEGJOG_PUBLICVARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7AFF20)

inline static constexpr unsigned int PJHKDJEGJOG_PublicVariable_TypeDefinitionIndex = 67875;

struct alignas(8) PJHKDJEGJOG_PublicVariable
{
	::PJHKDJEGJOG_PublicVariable_BJOBKCKNEJI varType; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* varKey; // 0x18
	::System::String* varStr; // 0x20
	::System::Single varNumber; // 0x28
	::System::Int32 varInt; // 0x2C

	::System::Boolean get_varBool()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_PUBLICVARIABLE_GET_VARBOOL_OFFSET))(this);
	}

	::System::Void set_varBool(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_PUBLICVARIABLE_SET_VARBOOL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_PUBLICVARIABLE_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_PUBLICVARIABLE_DPIHOJBBGLA_OFFSET))(this);
	}

	::DLIOMJJPBOC* NLKAMNCKHOB()
	{
		return ((::DLIOMJJPBOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_PUBLICVARIABLE_NLKAMNCKHOB_OFFSET))(this);
	}
};
