#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define BBACBMHNGBL_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x1360DD90)
#define BBACBMHNGBL_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1360DDE0)
#define BBACBMHNGBL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1360DD50)
#define BBACBMHNGBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1360DD40)

inline static constexpr unsigned int BBACBMHNGBL_TypeDefinitionIndex = 43850;

class BBACBMHNGBL : public ::System::Object
{
public:
	::System::String* HHHDGCECMDB; // 0x10
	::MoleMole::GraphicSettingProfileBase* CNOAMGPMGHM; // 0x18
	::System::Boolean LLHLIKKMOFI; // 0x20

	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + BBACBMHNGBL__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBACBMHNGBL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBACBMHNGBL_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void GIAOBHOJCDP(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBACBMHNGBL_GIAOBHOJCDP_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}
};
