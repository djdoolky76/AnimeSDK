#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLCMJJOJAFL;
class KGDPAJELMAF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGLBOONCPBM_FKCMNOBLBGB_OFFSET UNITYSDK_OFFSET(0x17E48DD0)
#define HGLBOONCPBM_IGCOOFCKFCD_OFFSET UNITYSDK_OFFSET(0x17E48E20)
#define HGLBOONCPBM_MMFJNKCLLPD_OFFSET UNITYSDK_OFFSET(0x17E48DC0)
#define HGLBOONCPBM_ODOJPADCCMJ_OFFSET UNITYSDK_OFFSET(0x17E48DA0)
#define HGLBOONCPBM_OOODAHPKANM_OFFSET UNITYSDK_OFFSET(0x17E48DB0)
#define HGLBOONCPBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E48B60)

inline static constexpr unsigned int HGLBOONCPBM_TypeDefinitionIndex = 73926;

class HGLBOONCPBM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JLCMJJOJAFL*>* _PAAIDPHKPOP_k__BackingField; // 0x10
	::KGDPAJELMAF* _LMPCHLOEEIB_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::JLCMJJOJAFL*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JLCMJJOJAFL*>*))((::PBYTE)hIl2Cpp + HGLBOONCPBM__CTOR_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void ODOJPADCCMJ(::System::Collections::Generic::List_1<::JLCMJJOJAFL*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JLCMJJOJAFL*>*))((::PBYTE)hIl2Cpp + HGLBOONCPBM_ODOJPADCCMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OOODAHPKANM(::KGDPAJELMAF* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KGDPAJELMAF*))((::PBYTE)hIl2Cpp + HGLBOONCPBM_OOODAHPKANM_OFFSET))(this, EGEGIMGMJHN);
	}

	::KGDPAJELMAF* MMFJNKCLLPD()
	{
		return ((::KGDPAJELMAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLBOONCPBM_MMFJNKCLLPD_OFFSET))(this);
	}

	::System::Void FKCMNOBLBGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLBOONCPBM_FKCMNOBLBGB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JLCMJJOJAFL*>* IGCOOFCKFCD()
	{
		return ((::System::Collections::Generic::List_1<::JLCMJJOJAFL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLBOONCPBM_IGCOOFCKFCD_OFFSET))(this);
	}
};
