#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"
#include "unitysdk/LHMKFBLNLIA.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLLHOAFAMMD_DMNIBGPFNIN_OFFSET UNITYSDK_OFFSET(0x1A1F7D50)
#define DLLHOAFAMMD_GHAIEOMBMDH_OFFSET UNITYSDK_OFFSET(0x1A1F7D60)
#define DLLHOAFAMMD_JCLEMHAEGDD_OFFSET UNITYSDK_OFFSET(0x1A1F7E40)
#define DLLHOAFAMMD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1A1F7D70)
#define DLLHOAFAMMD_LGKJGCMIBCJ_OFFSET UNITYSDK_OFFSET(0x1A1F7E30)
#define DLLHOAFAMMD_PKDGOPAAMJJ_OFFSET UNITYSDK_OFFSET(0x1A1F7D40)
#define DLLHOAFAMMD_PPPJCKJJDDN_OFFSET UNITYSDK_OFFSET(0x1A1F7E50)
#define DLLHOAFAMMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F7CE0)

inline static constexpr unsigned int DLLHOAFAMMD_TypeDefinitionIndex = 81750;

class DLLHOAFAMMD : public ::IGKOFMFKNNO
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _GHGGKNLGBEB_k__BackingField; // 0x10
	::LHMKFBLNLIA _JCLDDLLDBDD_k__BackingField; // 0x18
	::System::UInt32 _MIGKHIOECBN_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHOAFAMMD__CTOR_OFFSET))(this);
	}

	::System::UInt32 PKDGOPAAMJJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHOAFAMMD_PKDGOPAAMJJ_OFFSET))(this);
	}

	::System::Void DMNIBGPFNIN(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLLHOAFAMMD_DMNIBGPFNIN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GHAIEOMBMDH()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHOAFAMMD_GHAIEOMBMDH_OFFSET))(this);
	}

	static ::DLLHOAFAMMD* JFDOOELFAOA()
	{
		return ((::DLLHOAFAMMD*(*)())((::PBYTE)hIl2Cpp + DLLHOAFAMMD_JFDOOELFAOA_OFFSET))();
	}

	::System::Void LGKJGCMIBCJ(::System::Collections::Generic::List_1<::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DLLHOAFAMMD_LGKJGCMIBCJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCLEMHAEGDD(::LHMKFBLNLIA EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LHMKFBLNLIA))((::PBYTE)hIl2Cpp + DLLHOAFAMMD_JCLEMHAEGDD_OFFSET))(this, EGEGIMGMJHN);
	}

	::LHMKFBLNLIA PPPJCKJJDDN()
	{
		return ((::LHMKFBLNLIA(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHOAFAMMD_PPPJCKJJDDN_OFFSET))(this);
	}
};
