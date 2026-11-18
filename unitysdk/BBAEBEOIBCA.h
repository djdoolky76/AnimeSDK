#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGBFJFCOEJL.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BBAEBEOIBCA_AFINGAOONII_OFFSET UNITYSDK_OFFSET(0x944AC0)
#define BBAEBEOIBCA_AIENFOFDMEI_OFFSET UNITYSDK_OFFSET(0x944BE0)
#define BBAEBEOIBCA_APNGBLPKKCJ_OFFSET UNITYSDK_OFFSET(0x944C40)
#define BBAEBEOIBCA_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x944950)
#define BBAEBEOIBCA_CMBCOJBNJCK_OFFSET UNITYSDK_OFFSET(0x944CA0)
#define BBAEBEOIBCA_CMOEJFFNDDG_OFFSET UNITYSDK_OFFSET(0x944A10)
#define BBAEBEOIBCA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x944D00)
#define BBAEBEOIBCA_FLDIPOJJKDI_OFFSET UNITYSDK_OFFSET(0x944B60)
#define BBAEBEOIBCA_GENDOJLDKLM_OFFSET UNITYSDK_OFFSET(0x944A70)
#define BBAEBEOIBCA_IFMLICNFFKL_OFFSET UNITYSDK_OFFSET(0x9448B0)
#define BBAEBEOIBCA_ILPBMHNDOID_OFFSET UNITYSDK_OFFSET(0x944900)
#define BBAEBEOIBCA_LLGPCBGEJEJ_OFFSET UNITYSDK_OFFSET(0x9449B0)
#define BBAEBEOIBCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9448A0)

inline static constexpr unsigned int BBAEBEOIBCA_TypeDefinitionIndex = 28686;

struct alignas(4) BBAEBEOIBCA
{
	// static const ::System::Int32 OGGGJMBCDKD = 0x40; // 0x0
	// static const ::System::Int32 AEDMHJAOLOD = 0x3F; // 0x0
	// static const ::System::UInt16 FAMLOCGMBAD = 0xFFFF; // 0x0
	::System::UInt64 JMFKGLHGIOI; // 0x10
	::System::Single DGPNPDHNNKL; // 0x18
	::AGBFJFCOEJL EOBJDEADDBE; // 0x1C
	::System::UInt16 NJKIKEKBCGI; // 0x20
	::System::UInt16 LIDGIGKFJKO; // 0x22
	::System::UInt32 IGHHEEDJPCN; // 0x24

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_TOSTRING_OFFSET))(this);
	}

	::System::Void IFMLICNFFKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_IFMLICNFFKL_OFFSET))(this);
	}

	::System::Boolean ILPBMHNDOID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_ILPBMHNDOID_OFFSET))(this);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_BMGEEIJFLIJ_OFFSET))(this);
	}

	::System::Void LLGPCBGEJEJ(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_LLGPCBGEJEJ_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Boolean CMOEJFFNDDG(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_CMOEJFFNDDG_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void GENDOJLDKLM(::System::UInt64 AJGBGDFNOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_GENDOJLDKLM_OFFSET))(this, AJGBGDFNOLI);
	}

	::System::Void AFINGAOONII(::System::UInt16 IIBJDOEHMOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_AFINGAOONII_OFFSET))(this, IIBJDOEHMOM);
	}

	::System::Void FLDIPOJJKDI(::System::UInt16 IIBJDOEHMOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_FLDIPOJJKDI_OFFSET))(this, IIBJDOEHMOM);
	}

	::System::Void AIENFOFDMEI(::System::UInt16 JCLACDMGAPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_AIENFOFDMEI_OFFSET))(this, JCLACDMGAPA);
	}

	::System::Void APNGBLPKKCJ(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_APNGBLPKKCJ_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void CMBCOJBNJCK(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_CMBCOJBNJCK_OFFSET))(this, GEPABHJBIAH);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAEBEOIBCA_DPIHOJBBGLA_OFFSET))(this);
	}
};
