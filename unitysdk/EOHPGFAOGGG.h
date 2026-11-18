#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define EOHPGFAOGGG_BIFLHNIADHM_OFFSET UNITYSDK_OFFSET(0xF9E6320)
#define EOHPGFAOGGG_EGIJCCIPLGB_OFFSET UNITYSDK_OFFSET(0xF9E5B80)
#define EOHPGFAOGGG_EQUALS_OFFSET UNITYSDK_OFFSET(0xF9E5950)
#define EOHPGFAOGGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF9E5A10)
#define EOHPGFAOGGG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0xF9E6390)
#define EOHPGFAOGGG_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0xF9E5ED0)
#define EOHPGFAOGGG_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0xF9E5FC0)
#define EOHPGFAOGGG_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0xF9E5D90)
#define EOHPGFAOGGG_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0xF9E6020)
#define EOHPGFAOGGG__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E5B70)

inline static constexpr unsigned int EOHPGFAOGGG_TypeDefinitionIndex = 75120;

class EOHPGFAOGGG : public ::System::Object
{
public:
	::System::String* HICDOCNALAF; // 0x10
	::System::String* MMBEPFEDOEC; // 0x18
	::System::Boolean HIEHIBAAOLC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHPGFAOGGG__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::EOHPGFAOGGG* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOHPGFAOGGG*))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_GETHASHCODE_OFFSET))(this);
	}

	::System::Void EGIJCCIPLGB(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_EGIJCCIPLGB_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PADHEHLKBDO(::System::Object* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}

	static ::System::Boolean INCFIJKMIGG(::EOHPGFAOGGG* FFKBEGIHIGG, ::EOHPGFAOGGG* CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::EOHPGFAOGGG*, ::EOHPGFAOGGG*))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	static ::System::Boolean NOGJIJMACNO(::EOHPGFAOGGG* FFKBEGIHIGG, ::EOHPGFAOGGG* CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::EOHPGFAOGGG*, ::EOHPGFAOGGG*))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean BIFLHNIADHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_BIFLHNIADHM_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHPGFAOGGG_HLPHPBAODIF_OFFSET))(this);
	}
};
