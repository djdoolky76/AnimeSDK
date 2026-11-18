#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKPAOOFMPKC;
namespace System { class String; }

#define CKPAOOFMPKC_MHKHBAFBHJH_DBCMBAJBMME_OFFSET UNITYSDK_OFFSET(0x1A1B9280)
#define CKPAOOFMPKC_MHKHBAFBHJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B9270)

inline static constexpr unsigned int CKPAOOFMPKC_MHKHBAFBHJH_TypeDefinitionIndex = 90492;

class CKPAOOFMPKC_MHKHBAFBHJH : public ::System::Object
{
public:
	::CKPAOOFMPKC* KLHPEBKNIFB; // 0x10
	::System::String* MABGFIGCIGD; // 0x18
	::System::Single NHLCCIEKEPD; // 0x20
	::System::Int32 EJFGMAHJMHK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MHKHBAFBHJH__CTOR_OFFSET))(this);
	}

	::System::Void DBCMBAJBMME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_MHKHBAFBHJH_DBCMBAJBMME_OFFSET))(this);
	}
};
