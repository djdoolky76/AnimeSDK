#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define IHMOLJDOHGM_CEECHOIILCF_OFFSET UNITYSDK_OFFSET(0x16576FE0)
#define IHMOLJDOHGM_CMGBGLFPPOD_OFFSET UNITYSDK_OFFSET(0x165768C0)
#define IHMOLJDOHGM_DKIKDKCMFEC_OFFSET UNITYSDK_OFFSET(0x16576B90)
#define IHMOLJDOHGM_HOMEKNCBIAD_OFFSET UNITYSDK_OFFSET(0x16576850)
#define IHMOLJDOHGM_IJNDJKABPGE_OFFSET UNITYSDK_OFFSET(0x16576E60)
#define IHMOLJDOHGM_KLPKDJOGJKL_OFFSET UNITYSDK_OFFSET(0x16576D30)
#define IHMOLJDOHGM_MBJDBEKOFEO_OFFSET UNITYSDK_OFFSET(0x16577050)
#define IHMOLJDOHGM_MEAKGJBPJFD_OFFSET UNITYSDK_OFFSET(0x16576CC0)
#define IHMOLJDOHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x165767A0)

inline static constexpr unsigned int IHMOLJDOHGM_TypeDefinitionIndex = 59922;

class IHMOLJDOHGM : public ::System::Object
{
public:
	::System::String* ANFCLNLPEPJ; // 0x10
	::System::String* BBJDEOMNHBB; // 0x18
	::System::Text::StringBuilder* MCPOMCPOLNC; // 0x20
	::System::Int32 BFIPJBJLBJA; // 0x28
	::System::Int32 BEMKBMNHBIB; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM__CTOR_OFFSET))(this);
	}

	::System::Int32 HOMEKNCBIAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_HOMEKNCBIAD_OFFSET))(this);
	}

	::System::Boolean DKIKDKCMFEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_DKIKDKCMFEC_OFFSET))(this);
	}

	::System::Void MEAKGJBPJFD(::System::String*& LCEGOBBEECM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_MEAKGJBPJFD_OFFSET))(this, LCEGOBBEECM);
	}

	::System::Boolean KLPKDJOGJKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_KLPKDJOGJKL_OFFSET))(this);
	}

	::System::Boolean IJNDJKABPGE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_IJNDJKABPGE_OFFSET))(this);
	}

	::System::Single CEECHOIILCF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_CEECHOIILCF_OFFSET))(this);
	}

	::System::UInt32 MBJDBEKOFEO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_MBJDBEKOFEO_OFFSET))(this);
	}

	::System::String* CMGBGLFPPOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMOLJDOHGM_CMGBGLFPPOD_OFFSET))(this);
	}
};
