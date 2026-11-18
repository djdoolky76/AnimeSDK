#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDNPAPNHIIG.h"
#include "unitysdk/AJJMHOGKDNF.h"

class ONDCMMIBPHD;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPEMIEFFNEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13AE5560)
#define JPEMIEFFNEN_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x13AE5690)
#define JPEMIEFFNEN_DOLMHFFIHIA_OFFSET UNITYSDK_OFFSET(0x13AE5E90)
#define JPEMIEFFNEN_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x13AE5D30)
#define JPEMIEFFNEN_MJPLLGPKAPI_OFFSET UNITYSDK_OFFSET(0x13AE57F0)
#define JPEMIEFFNEN_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13AE55A0)
#define JPEMIEFFNEN_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x13AE5BD0)
#define JPEMIEFFNEN_PNKBPMKMCLH_OFFSET UNITYSDK_OFFSET(0x13AE58B0)
#define JPEMIEFFNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE5670)

inline static constexpr unsigned int JPEMIEFFNEN_TypeDefinitionIndex = 68743;

class JPEMIEFFNEN
{
public:
	::System::Collections::Generic::Dictionary_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*>* CKFLDEIJJJO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_ONCREATE_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB(::HDNPAPNHIIG MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::HDNPAPNHIIG))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_DNNJOOJBJNB_OFFSET))(this, MCOHLHMKLIP);
	}

	static ::ONDCMMIBPHD* MJPLLGPKAPI()
	{
		return ((::ONDCMMIBPHD*(*)())((::PBYTE)hIl2Cpp + JPEMIEFFNEN_MJPLLGPKAPI_OFFSET))();
	}

	::System::Void PNKBPMKMCLH(::AJJMHOGKDNF EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::AJJMHOGKDNF))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_PNKBPMKMCLH_OFFSET))(this, EJFGMAHJMHK);
	}

	::System::Void PGHAJOMNDDJ(::HDNPAPNHIIG MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::HDNPAPNHIIG))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_PGHAJOMNDDJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void ECEBDPJEKNN(::HDNPAPNHIIG MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::HDNPAPNHIIG))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_ECEBDPJEKNN_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean DOLMHFFIHIA(::HDNPAPNHIIG MCOHLHMKLIP, ::MoleMole::BubbleGroupPlayGraphContent* NGHLLDAJJJE, ::System::Func_1<::ONDCMMIBPHD*>* OKDJPLECMEI)
	{
		return ((::System::Boolean(*)(::PVOID, ::HDNPAPNHIIG, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Func_1<::ONDCMMIBPHD*>*))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_DOLMHFFIHIA_OFFSET))(this, MCOHLHMKLIP, NGHLLDAJJJE, OKDJPLECMEI);
	}
};
