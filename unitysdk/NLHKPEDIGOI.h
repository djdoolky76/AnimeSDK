#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class IBENDELLLAO;
class LDPGEIMEPPD;
class LHIPCHKEHME;
class MOBNLGMENEM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLHKPEDIGOI_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0xE1A9230)
#define NLHKPEDIGOI_BGJOEHIOGJB_OFFSET UNITYSDK_OFFSET(0xE1A9240)
#define NLHKPEDIGOI_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0xE1A9160)
#define NLHKPEDIGOI_CHKFAGPPHOM_OFFSET UNITYSDK_OFFSET(0xE1A9300)
#define NLHKPEDIGOI_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0xE1A9220)
#define NLHKPEDIGOI_EIKMKGJFDKC_OFFSET UNITYSDK_OFFSET(0xE1A9270)
#define NLHKPEDIGOI_GCJEHAPDEMH_OFFSET UNITYSDK_OFFSET(0xE1A9310)
#define NLHKPEDIGOI_IJKBBFEHHLK_OFFSET UNITYSDK_OFFSET(0xE1A9250)
#define NLHKPEDIGOI_JFHDDKGEANM_OFFSET UNITYSDK_OFFSET(0xE1A92F0)
#define NLHKPEDIGOI_JOENDAKIIOM_OFFSET UNITYSDK_OFFSET(0xE1A9260)
#define NLHKPEDIGOI_MGIFLBGBFAO_OFFSET UNITYSDK_OFFSET(0xE1A91C0)
#define NLHKPEDIGOI_OMNKJPEHFEO_OFFSET UNITYSDK_OFFSET(0xE1A9390)
#define NLHKPEDIGOI_OODBGBIPLGM_OFFSET UNITYSDK_OFFSET(0xE1A9480)
#define NLHKPEDIGOI__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A9470)

inline static constexpr unsigned int NLHKPEDIGOI_TypeDefinitionIndex = 82472;

class NLHKPEDIGOI : public ::System::Object
{
public:
	::LDPGEIMEPPD* DDCNLBEKEIB; // 0x10
	::System::String* IGGMPFJFNDP; // 0x18
	::System::UInt32 LBINFBPACPN; // 0x20
	::System::UInt32 GDPDEFJFMNL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI__CTOR_OFFSET))(this);
	}

	::System::UInt32 BPOPIDFJDBK()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_BPOPIDFJDBK_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_DCGJGALIIHB_OFFSET))(this);
	}

	::System::UInt32 ACDOMAEJONK()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_ACDOMAEJONK_OFFSET))(this);
	}

	::System::UInt32 BGJOEHIOGJB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_BGJOEHIOGJB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::LHIPCHKEHME*>* IJKBBFEHHLK()
	{
		return ((::System::Collections::Generic::List_1<::LHIPCHKEHME*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_IJKBBFEHHLK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MOBNLGMENEM*>* JOENDAKIIOM()
	{
		return ((::System::Collections::Generic::List_1<::MOBNLGMENEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_JOENDAKIIOM_OFFSET))(this);
	}

	::Foundation::AssetPath EIKMKGJFDKC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_EIKMKGJFDKC_OFFSET))(this);
	}

	::System::String* JFHDDKGEANM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_JFHDDKGEANM_OFFSET))(this);
	}

	::IBENDELLLAO* CHKFAGPPHOM()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_CHKFAGPPHOM_OFFSET))(this);
	}

	::System::Boolean GCJEHAPDEMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_GCJEHAPDEMH_OFFSET))(this);
	}

	::System::Void OMNKJPEHFEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_OMNKJPEHFEO_OFFSET))(this);
	}

	::System::UInt32 MGIFLBGBFAO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_MGIFLBGBFAO_OFFSET))(this);
	}

	static ::NLHKPEDIGOI* OODBGBIPLGM(::LDPGEIMEPPD* DDCNLBEKEIB)
	{
		return ((::NLHKPEDIGOI*(*)(::LDPGEIMEPPD*))((::PBYTE)hIl2Cpp + NLHKPEDIGOI_OODBGBIPLGM_OFFSET))(DDCNLBEKEIB);
	}
};
