#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define OMMEPJLDOLG_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x172DC640)
#define OMMEPJLDOLG_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x172DC5D0)
#define OMMEPJLDOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x172DC700)

inline static constexpr unsigned int OMMEPJLDOLG_TypeDefinitionIndex = 60408;

class OMMEPJLDOLG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEPJLDOLG__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMMEPJLDOLG_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMMEPJLDOLG_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}
};
