#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLPDDLIJEBK.h"
#include "unitysdk/System/Object.h"

class AFMIELLOBIJ;
class IHJNDNLJNPN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KADDBCHLLFN_BEHBJMHBCGD_OFFSET UNITYSDK_OFFSET(0x1947C5A0)
#define KADDBCHLLFN_CAAKCMEIFCB_OFFSET UNITYSDK_OFFSET(0x1947C520)
#define KADDBCHLLFN_EABKGMOBADC_OFFSET UNITYSDK_OFFSET(0x1947C530)
#define KADDBCHLLFN_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x1947C730)
#define KADDBCHLLFN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1947C670)
#define KADDBCHLLFN_HOIHAGNKMLA_OFFSET UNITYSDK_OFFSET(0x1947C6D0)
#define KADDBCHLLFN_KDLCMCHAAIP_OFFSET UNITYSDK_OFFSET(0x1947C540)
#define KADDBCHLLFN_MBIEHCJDBHJ_OFFSET UNITYSDK_OFFSET(0x1947C790)
#define KADDBCHLLFN_OPMLPEFJIAP_OFFSET UNITYSDK_OFFSET(0x1947C4C0)
#define KADDBCHLLFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C350)

inline static constexpr unsigned int KADDBCHLLFN_TypeDefinitionIndex = 63637;

class KADDBCHLLFN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* AOEJPGIIEBF; // 0x10
	::AFMIELLOBIJ* DEKJDEPKKLH; // 0x18
	::System::Boolean _OMALELNFEAH_k__BackingField; // 0x20

	::System::Void _ctor(::AFMIELLOBIJ* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::AFMIELLOBIJ*))((::PBYTE)hIl2Cpp + KADDBCHLLFN__CTOR_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Int32 OPMLPEFJIAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_OPMLPEFJIAP_OFFSET))(this);
	}

	::System::Boolean CAAKCMEIFCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_CAAKCMEIFCB_OFFSET))(this);
	}

	::System::Void EABKGMOBADC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KADDBCHLLFN_EABKGMOBADC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Single>* KDLCMCHAAIP()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_KDLCMCHAAIP_OFFSET))(this);
	}

	::System::Void BEHBJMHBCGD(::IHJNDNLJNPN*& OCJBFIIPNBK)
	{
		return ((::System::Void(*)(::PVOID, ::IHJNDNLJNPN*&))((::PBYTE)hIl2Cpp + KADDBCHLLFN_BEHBJMHBCGD_OFFSET))(this, OCJBFIIPNBK);
	}

	::System::Int32 HOIHAGNKMLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_HOIHAGNKMLA_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_FJOLPGBLBBH_OFFSET))(this);
	}

	::OLPDDLIJEBK HKELPCLHLEC()
	{
		return ((::OLPDDLIJEBK(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* MBIEHCJDBHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADDBCHLLFN_MBIEHCJDBHJ_OFFSET))(this);
	}
};
