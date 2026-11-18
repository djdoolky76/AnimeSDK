#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EPJAODADCEA;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIOCKGJEFNI_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x13A64880)
#define OIOCKGJEFNI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13A647E0)
#define OIOCKGJEFNI_CEOBKJCBCJP_OFFSET UNITYSDK_OFFSET(0x13A64810)
#define OIOCKGJEFNI_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x13A64820)
#define OIOCKGJEFNI_GNLFCMDMDIE_OFFSET UNITYSDK_OFFSET(0x13A64970)
#define OIOCKGJEFNI_KFEGNNNKLKA_OFFSET UNITYSDK_OFFSET(0x13A643E0)
#define OIOCKGJEFNI_MEOKECCHPNM_OFFSET UNITYSDK_OFFSET(0x13A646A0)
#define OIOCKGJEFNI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13A64600)
#define OIOCKGJEFNI_PNDFLGAFKJG_OFFSET UNITYSDK_OFFSET(0x13A64800)
#define OIOCKGJEFNI_PPAKLMFKJIH_OFFSET UNITYSDK_OFFSET(0x13A647F0)
#define OIOCKGJEFNI_PPCKAJBCAIF_OFFSET UNITYSDK_OFFSET(0x13A64690)
#define OIOCKGJEFNI_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x13A642E0)
#define OIOCKGJEFNI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A64230)
#define OIOCKGJEFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A64650)

inline static constexpr unsigned int OIOCKGJEFNI_TypeDefinitionIndex = 66219;

class OIOCKGJEFNI
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _BKJFDLHHBJH_k__BackingField; // 0x28
	::System::Boolean _BOIOKICNLMK_k__BackingField; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIOCKGJEFNI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCKGJEFNI__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void KFEGNNNKLKA(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_KFEGNNNKLKA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Collections::Generic::List_1<::System::String*>* PPCKAJBCAIF()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_PPCKAJBCAIF_OFFSET))(this);
	}

	::System::Boolean MEOKECCHPNM(::MoleMole::EntityHandle& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_MEOKECCHPNM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void PPAKLMFKJIH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_PPAKLMFKJIH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PNDFLGAFKJG(::System::Collections::Generic::List_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_PNDFLGAFKJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CEOBKJCBCJP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_CEOBKJCBCJP_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void AMEGHCHMIOD(::EPJAODADCEA* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_AMEGHCHMIOD_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void GNLFCMDMDIE(::System::Boolean PJFBIBPAJBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIOCKGJEFNI_GNLFCMDMDIE_OFFSET))(this, PJFBIBPAJBF);
	}
};
