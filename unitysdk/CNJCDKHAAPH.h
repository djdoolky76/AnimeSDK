#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class FLOMKKHDOFB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNJCDKHAAPH_BEHANCJGEMO_OFFSET UNITYSDK_OFFSET(0x145D9F90)
#define CNJCDKHAAPH_GFFKGCNIKCM_OFFSET UNITYSDK_OFFSET(0x145D9F20)
#define CNJCDKHAAPH_LBCKEDHMDND_OFFSET UNITYSDK_OFFSET(0x145D9910)
#define CNJCDKHAAPH_MFGLBGBBBDF_OFFSET UNITYSDK_OFFSET(0x145D9F30)
#define CNJCDKHAAPH_PPGBADHJMCD_OFFSET UNITYSDK_OFFSET(0x145D9F40)
#define CNJCDKHAAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x145D9880)

inline static constexpr unsigned int CNJCDKHAAPH_TypeDefinitionIndex = 47259;

class CNJCDKHAAPH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FLOMKKHDOFB*>* IFEMIJPMDJF; // 0x10
	::CJIEIHEDMME* _LABBLGBPNLG_k__BackingField; // 0x18
	::System::String* FBMNGFKILDG; // 0x20
	::FLOMKKHDOFB* FIMNGGBADEK; // 0x28
	::System::Int32 LOLMDOENJCI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDKHAAPH__CTOR_OFFSET))(this);
	}

	::System::Void GFFKGCNIKCM(::CJIEIHEDMME* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CNJCDKHAAPH_GFFKGCNIKCM_OFFSET))(this, EGEGIMGMJHN);
	}

	::CJIEIHEDMME* MFGLBGBBBDF()
	{
		return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDKHAAPH_MFGLBGBBBDF_OFFSET))(this);
	}

	::System::Void LBCKEDHMDND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDKHAAPH_LBCKEDHMDND_OFFSET))(this);
	}

	::System::Void PPGBADHJMCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDKHAAPH_PPGBADHJMCD_OFFSET))(this);
	}

	::CJIEIHEDMME* BEHANCJGEMO()
	{
		return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJCDKHAAPH_BEHANCJGEMO_OFFSET))(this);
	}
};
