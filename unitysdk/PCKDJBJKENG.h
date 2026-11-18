#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFGDPGDLDOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCKDJBJKENG_AMHAPOPDKIN_OFFSET UNITYSDK_OFFSET(0x12965840)
#define PCKDJBJKENG_CHCOCJINBCI_OFFSET UNITYSDK_OFFSET(0x12965860)
#define PCKDJBJKENG_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x12965850)
#define PCKDJBJKENG_KBGCKDMLJGG_OFFSET UNITYSDK_OFFSET(0x12965830)
#define PCKDJBJKENG_PFHAHNIBJFB_OFFSET UNITYSDK_OFFSET(0x136EBCD0)
#define PCKDJBJKENG__CTOR_OFFSET UNITYSDK_OFFSET(0x129657F0)

inline static constexpr unsigned int PCKDJBJKENG_TypeDefinitionIndex = 73853;

class PCKDJBJKENG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _MDKKLPOMGBA_k__BackingField; // 0x10
	::IFGDPGDLDOJ* _GHMENCICKDD_k__BackingField; // 0x18
	::System::Int32 _JCGIDDKHAEA_k__BackingField; // 0x20

	::System::Void _ctor(::IFGDPGDLDOJ* FODKKIJGBGM)
	{
		return ((::System::Void(*)(::PVOID, ::IFGDPGDLDOJ*))((::PBYTE)hIl2Cpp + PCKDJBJKENG__CTOR_OFFSET))(this, FODKKIJGBGM);
	}

	::System::Void KBGCKDMLJGG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCKDJBJKENG_KBGCKDMLJGG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AMHAPOPDKIN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKDJBJKENG_AMHAPOPDKIN_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKDJBJKENG_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void CHCOCJINBCI(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PCKDJBJKENG_CHCOCJINBCI_OFFSET))(this, EGEGIMGMJHN);
	}

	::IFGDPGDLDOJ* PFHAHNIBJFB()
	{
		return ((::IFGDPGDLDOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKDJBJKENG_PFHAHNIBJFB_OFFSET))(this);
	}
};
