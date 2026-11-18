#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBPFAIFLOAN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GAJPNLKICJI_ADGPNDDHIAD_OFFSET UNITYSDK_OFFSET(0x13DABC80)
#define GAJPNLKICJI_FDNGGMKALLP_OFFSET UNITYSDK_OFFSET(0x13DABC50)
#define GAJPNLKICJI_HOPJNMBMEKO_OFFSET UNITYSDK_OFFSET(0x13DABC90)
#define GAJPNLKICJI_IODBAHPDBPJ_OFFSET UNITYSDK_OFFSET(0x13DABA10)
#define GAJPNLKICJI_JBBIKKIDJCI_OFFSET UNITYSDK_OFFSET(0x13DAB9A0)
#define GAJPNLKICJI_JCEJBEKDBHP_OFFSET UNITYSDK_OFFSET(0x13DABA20)
#define GAJPNLKICJI_LCEONOIDGDO_OFFSET UNITYSDK_OFFSET(0x13DAB990)
#define GAJPNLKICJI_NHBJACGKAFB_OFFSET UNITYSDK_OFFSET(0x13DABC60)
#define GAJPNLKICJI_NPFADBMMIOA_OFFSET UNITYSDK_OFFSET(0x13DABC70)
#define GAJPNLKICJI_NPMCMFELBCE_OFFSET UNITYSDK_OFFSET(0x13DAB9B0)
#define GAJPNLKICJI__CTOR_OFFSET UNITYSDK_OFFSET(0x13DAB8E0)

inline static constexpr unsigned int GAJPNLKICJI_TypeDefinitionIndex = 47819;

class GAJPNLKICJI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LBPFAIFLOAN*>* _NCODHLEGMPH_k__BackingField; // 0x10
	::System::Int32 _HIPHJIDLADB_k__BackingField; // 0x18
	::System::Int32 _BCLIHOIIMBN_k__BackingField; // 0x1C
	::System::Int32 _DDGOBOMNAPC_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 JLOMLLEDCNO, ::System::Int32 GEGEHLEILBN, ::System::Int32 MJMMJELICND, ::System::Collections::Generic::List_1<::LBPFAIFLOAN*>* KDJFENABDKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::LBPFAIFLOAN*>*))((::PBYTE)hIl2Cpp + GAJPNLKICJI__CTOR_OFFSET))(this, JLOMLLEDCNO, GEGEHLEILBN, MJMMJELICND, KDJFENABDKA);
	}

	::System::Void LCEONOIDGDO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAJPNLKICJI_LCEONOIDGDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JBBIKKIDJCI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAJPNLKICJI_JBBIKKIDJCI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NPMCMFELBCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPNLKICJI_NPMCMFELBCE_OFFSET))(this);
	}

	::System::Int32 IODBAHPDBPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPNLKICJI_IODBAHPDBPJ_OFFSET))(this);
	}

	::System::Boolean JCEJBEKDBHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPNLKICJI_JCEJBEKDBHP_OFFSET))(this);
	}

	::System::Int32 FDNGGMKALLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPNLKICJI_FDNGGMKALLP_OFFSET))(this);
	}

	::System::Void NHBJACGKAFB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAJPNLKICJI_NHBJACGKAFB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NPFADBMMIOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPNLKICJI_NPFADBMMIOA_OFFSET))(this);
	}

	::System::Void ADGPNDDHIAD(::System::Collections::Generic::List_1<::LBPFAIFLOAN*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LBPFAIFLOAN*>*))((::PBYTE)hIl2Cpp + GAJPNLKICJI_ADGPNDDHIAD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::LBPFAIFLOAN*>* HOPJNMBMEKO()
	{
		return ((::System::Collections::Generic::List_1<::LBPFAIFLOAN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPNLKICJI_HOPJNMBMEKO_OFFSET))(this);
	}
};
