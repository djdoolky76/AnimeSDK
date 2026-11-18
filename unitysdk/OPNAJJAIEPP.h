#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEIGJHNJNFL.h"

class DEGAAEEBGDB;
class HBGLPHGPLIH;
class PMDILCPPBIH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPNAJJAIEPP_BEALPIBPFEH_OFFSET UNITYSDK_OFFSET(0x1845A260)
#define OPNAJJAIEPP_HMCKOPGINMK_OFFSET UNITYSDK_OFFSET(0x1845A400)
#define OPNAJJAIEPP_IDMJOHICDCL_OFFSET UNITYSDK_OFFSET(0x1845A250)
#define OPNAJJAIEPP_KHGNEDFAJOM_OFFSET UNITYSDK_OFFSET(0x1845A240)
#define OPNAJJAIEPP_NAFBNMOBBAF_OFFSET UNITYSDK_OFFSET(0x1845A4B0)
#define OPNAJJAIEPP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x18459D60)
#define OPNAJJAIEPP__CTOR_OFFSET UNITYSDK_OFFSET(0x18459C80)

inline static constexpr unsigned int OPNAJJAIEPP_TypeDefinitionIndex = 66740;

class OPNAJJAIEPP
{
public:
	::System::Collections::Generic::List_1<::HBGLPHGPLIH*>* DDANKFKLKDK; // 0x10
	::System::Int32 ENNJNPOMFCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNAJJAIEPP__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNAJJAIEPP_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Boolean BEALPIBPFEH(::PMDILCPPBIH* HNOGOACBONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PMDILCPPBIH*))((::PBYTE)hIl2Cpp + OPNAJJAIEPP_BEALPIBPFEH_OFFSET))(this, HNOGOACBONK);
	}

	::System::Void HMCKOPGINMK(::NEIGJHNJNFL& DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::NEIGJHNJNFL&))((::PBYTE)hIl2Cpp + OPNAJJAIEPP_HMCKOPGINMK_OFFSET))(this, DIHNFECKHMD);
	}

	::System::Void NAFBNMOBBAF(::DEGAAEEBGDB* HNOGOACBONK)
	{
		return ((::System::Void(*)(::PVOID, ::DEGAAEEBGDB*))((::PBYTE)hIl2Cpp + OPNAJJAIEPP_NAFBNMOBBAF_OFFSET))(this, HNOGOACBONK);
	}

	static ::System::Int32 IDMJOHICDCL()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + OPNAJJAIEPP_IDMJOHICDCL_OFFSET))();
	}

	static ::System::Int32 KHGNEDFAJOM()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + OPNAJJAIEPP_KHGNEDFAJOM_OFFSET))();
	}
};
