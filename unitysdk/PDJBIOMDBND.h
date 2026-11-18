#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class IEHMCPFFJLG;
class IHPIPLCMHGC;
class IIPKIIKFIAA;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDJBIOMDBND_BMFFJGMAEGP_OFFSET UNITYSDK_OFFSET(0x178B7FA0)
#define PDJBIOMDBND_CHPMILALLIB_OFFSET UNITYSDK_OFFSET(0x178B7BB0)
#define PDJBIOMDBND_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x178B8F40)
#define PDJBIOMDBND_DCPECHHHOAC_1_OFFSET UNITYSDK_OFFSET(0x178B86C0)
#define PDJBIOMDBND_DCPECHHHOAC_OFFSET UNITYSDK_OFFSET(0x178B83E0)
#define PDJBIOMDBND_EFJJJPICCHM_OFFSET UNITYSDK_OFFSET(0x178B8060)
#define PDJBIOMDBND_GCHHHBHNDOC_OFFSET UNITYSDK_OFFSET(0x178B88B0)
#define PDJBIOMDBND_HDAFDHBPMOJ_OFFSET UNITYSDK_OFFSET(0x178B8910)
#define PDJBIOMDBND_HPCBDDONPEM_OFFSET UNITYSDK_OFFSET(0x178B8000)
#define PDJBIOMDBND_ODFMLMAAGBE_OFFSET UNITYSDK_OFFSET(0x178B8130)
#define PDJBIOMDBND_ONSTART_OFFSET UNITYSDK_OFFSET(0x178B7A20)
#define PDJBIOMDBND__CTOR_OFFSET UNITYSDK_OFFSET(0x178B7B20)

inline static constexpr unsigned int PDJBIOMDBND_TypeDefinitionIndex = 41131;

class PDJBIOMDBND : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::IEHMCPFFJLG*>* DDPELJMFDGD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NEKKDJPACCP; // 0x20
	::System::Int32 EOIIPJMNGAE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_ONSTART_OFFSET))(this);
	}

	::System::Int32 CHPMILALLIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_CHPMILALLIB_OFFSET))(this);
	}

	::System::Boolean HPCBDDONPEM(::System::UInt32 OFBIMIABNEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDJBIOMDBND_HPCBDDONPEM_OFFSET))(this, OFBIMIABNEP);
	}

	::IEHMCPFFJLG* EFJJJPICCHM(::System::UInt32 OFBIMIABNEP)
	{
		return ((::IEHMCPFFJLG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDJBIOMDBND_EFJJJPICCHM_OFFSET))(this, OFBIMIABNEP);
	}

	::System::Int32 ODFMLMAAGBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_ODFMLMAAGBE_OFFSET))(this);
	}

	::System::Void DCPECHHHOAC(::IHPIPLCMHGC* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::IHPIPLCMHGC*))((::PBYTE)hIl2Cpp + PDJBIOMDBND_DCPECHHHOAC_OFFSET))(this, PLBEAIIJADM);
	}

	::System::Void DCPECHHHOAC_1(::IIPKIIKFIAA* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::IIPKIIKFIAA*))((::PBYTE)hIl2Cpp + PDJBIOMDBND_DCPECHHHOAC_1_OFFSET))(this, PLBEAIIJADM);
	}

	::System::Boolean GCHHHBHNDOC(::System::UInt32 KMMGKJPAOMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDJBIOMDBND_GCHHHBHNDOC_OFFSET))(this, KMMGKJPAOMF);
	}

	::System::Boolean HDAFDHBPMOJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_HDAFDHBPMOJ_OFFSET))(this);
	}

	::System::Boolean BMFFJGMAEGP(::System::UInt32 OFBIMIABNEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDJBIOMDBND_BMFFJGMAEGP_OFFSET))(this, OFBIMIABNEP);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_CNIKAMOAANF_OFFSET))(this);
	}
};
