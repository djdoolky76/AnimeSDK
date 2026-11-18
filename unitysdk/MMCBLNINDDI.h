#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEMLFAEOJLK.h"
#include "unitysdk/System/Object.h"

class NCOHFCFKLND;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMCBLNINDDI_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x11A240D0)
#define MMCBLNINDDI_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x11A24080)
#define MMCBLNINDDI_JKHFEJJKJCC_OFFSET UNITYSDK_OFFSET(0x11A23B60)
#define MMCBLNINDDI_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x11A24110)
#define MMCBLNINDDI__CTOR_OFFSET UNITYSDK_OFFSET(0x11A24020)

inline static constexpr unsigned int MMCBLNINDDI_TypeDefinitionIndex = 68575;

class MMCBLNINDDI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::EEMLFAEOJLK>* GBGEBMIIPLE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCBLNINDDI__CTOR_OFFSET))(this);
	}

	::NCOHFCFKLND* JKHFEJJKJCC(::System::String* HNOPAJLDCFB)
	{
		return ((::NCOHFCFKLND*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MMCBLNINDDI_JKHFEJJKJCC_OFFSET))(this, HNOPAJLDCFB);
	}

	::EEMLFAEOJLK GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::EEMLFAEOJLK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMCBLNINDDI_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::List_1<::EEMLFAEOJLK>* FHDJDIIPGGP()
	{
		return ((::System::Collections::Generic::List_1<::EEMLFAEOJLK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCBLNINDDI_FHDJDIIPGGP_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCBLNINDDI_NGFKBKCFPLK_OFFSET))(this);
	}
};
