#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MLGOKCHMCPO.h"
#include "unitysdk/NEPPMFBACJH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EKHEOJOFLLA_MHDIOHNHBNB.h"

class ANOKJGCCGAO;
class FLDPBAPLICI;
namespace Foundation::ViewObject { template <typename T> class IViewObjectComponent_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKHEOJOFLLA_AAFKHOGKCLG_OFFSET UNITYSDK_OFFSET(0x11CB1310)
#define EKHEOJOFLLA_ANENCLMBKML_OFFSET UNITYSDK_OFFSET(0x11CB1CC0)
#define EKHEOJOFLLA_CIADKGNKLJB_OFFSET UNITYSDK_OFFSET(0x11CB1D10)
#define EKHEOJOFLLA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x11CB1BF0)
#define EKHEOJOFLLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CB11C0)
#define EKHEOJOFLLA_FDPJEEGGPGJ_OFFSET UNITYSDK_OFFSET(0x11CB1AF0)
#define EKHEOJOFLLA_GCOOPBNKPKL_OFFSET UNITYSDK_OFFSET(0x11CB1C00)
#define EKHEOJOFLLA_HCJPGPCHEKI_OFFSET UNITYSDK_OFFSET(0x11CB1C70)
#define EKHEOJOFLLA_MLNHEFJGNGA_OFFSET UNITYSDK_OFFSET(0x11CB1320)
#define EKHEOJOFLLA_NOOCIGNKPPO_OFFSET UNITYSDK_OFFSET(0x11CB14E0)
#define EKHEOJOFLLA_OCNHNBPFNHO_OFFSET UNITYSDK_OFFSET(0x11CB1AE0)
#define EKHEOJOFLLA_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x11CB1C60)
#define EKHEOJOFLLA_PBJJEELGLPP_OFFSET UNITYSDK_OFFSET(0x11CB1BE0)
#define EKHEOJOFLLA__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB1280)

inline static constexpr unsigned int EKHEOJOFLLA_TypeDefinitionIndex = 62644;

class EKHEOJOFLLA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::IViewObjectComponent_1<::Foundation::ViewObject::ViewObjectHandle>*>* AKBOKPJDBBN; // 0x10
	::NEPPMFBACJH AHECJBACEDB; // 0x18
	::FLDPBAPLICI* _HPMJLHGNENP_k__BackingField; // 0x20
	::Foundation::ViewObject::EViewObjectMetaFlags FFNCEDLCEOB; // 0x28
	::System::UInt32 AHJEKDHNNDA; // 0x2C
	::Foundation::ViewObject::EViewObjectReadyFlags NEPMGOFAKGD; // 0x30
	::System::Int32 _AHFINDKEDHH_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_DISPOSE_OFFSET))(this);
	}

	::System::Int32 AAFKHOGKCLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_AAFKHOGKCLG_OFFSET))(this);
	}

	static ::EKHEOJOFLLA_MHDIOHNHBNB MLNHEFJGNGA(::EKHEOJOFLLA*& AAOCANGHBDG)
	{
		return ((::EKHEOJOFLLA_MHDIOHNHBNB(*)(::EKHEOJOFLLA*&))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_MLNHEFJGNGA_OFFSET))(AAOCANGHBDG);
	}

	::Foundation::ViewObject::ViewObjectHandle NOOCIGNKPPO(::System::String* HIAIKHDFCLN)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_NOOCIGNKPPO_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Boolean OCNHNBPFNHO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_OCNHNBPFNHO_OFFSET))(this);
	}

	::System::Void FDPJEEGGPGJ(::MLGOKCHMCPO IIPPKCOCCJE)
	{
		return ((::System::Void(*)(::PVOID, ::MLGOKCHMCPO))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_FDPJEEGGPGJ_OFFSET))(this, IIPPKCOCCJE);
	}

	::System::Void PBJJEELGLPP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_PBJJEELGLPP_OFFSET))(this, EGEGIMGMJHN);
	}

	::FLDPBAPLICI* COPIDBEMEIE()
	{
		return ((::FLDPBAPLICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void GCOOPBNKPKL(::FLDPBAPLICI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_GCOOPBNKPKL_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void OPIAMPMCMFA(::FLDPBAPLICI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_OPIAMPMCMFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HCJPGPCHEKI(::ANOKJGCCGAO* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::ANOKJGCCGAO*))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_HCJPGPCHEKI_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void ANENCLMBKML(::Foundation::ViewObject::EViewObjectReadyFlags GHNAFBPJNKB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_ANENCLMBKML_OFFSET))(this, GHNAFBPJNKB);
	}

	::System::Void CIADKGNKLJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_CIADKGNKLJB_OFFSET))(this);
	}
};
