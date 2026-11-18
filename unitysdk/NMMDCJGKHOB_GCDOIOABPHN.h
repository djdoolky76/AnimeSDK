#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAKIIJGHPDA;
namespace System { class String; }

#define NMMDCJGKHOB_GCDOIOABPHN_GLFFLEICGOB_OFFSET UNITYSDK_OFFSET(0x1067B110)
#define NMMDCJGKHOB_GCDOIOABPHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1067B100)

inline static constexpr unsigned int NMMDCJGKHOB_GCDOIOABPHN_TypeDefinitionIndex = 54826;

class NMMDCJGKHOB_GCDOIOABPHN : public ::System::Object
{
public:
	::OAKIIJGHPDA* HNKPNNEJBAD; // 0x10
	::System::Int32 LLJIGFAINAA; // 0x18
	::System::Int32 HODAIDNDKHD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_GCDOIOABPHN__CTOR_OFFSET))(this);
	}

	::System::String* GLFFLEICGOB(::System::String* LCEGOBBEECM)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_GCDOIOABPHN_GLFFLEICGOB_OFFSET))(this, LCEGOBBEECM);
	}
};
