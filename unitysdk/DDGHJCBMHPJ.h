#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALFALGGEGBI.h"
#include "unitysdk/JGELKBLKFHE.h"

class DDGHJCBMHPJ_OMFNJLHJIGI;
class MACFPEHHKLH;
class PGHMLDBLALH;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DOINNMGICOF_1;

#define DDGHJCBMHPJ_AFDIKODCCOE_OFFSET UNITYSDK_OFFSET(0x147C2DA0)
#define DDGHJCBMHPJ_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x147C2F10)
#define DDGHJCBMHPJ_DCOGDBODMAA_OFFSET UNITYSDK_OFFSET(0x147C3AD0)
#define DDGHJCBMHPJ_FPPMJINLGGI_OFFSET UNITYSDK_OFFSET(0x147C3F70)
#define DDGHJCBMHPJ_GEFKOOALCBN_OFFSET UNITYSDK_OFFSET(0x147C2C70)
#define DDGHJCBMHPJ_GNFMEKHAICK_OFFSET UNITYSDK_OFFSET(0x147C3550)
#define DDGHJCBMHPJ_KHCJDBIDECP_OFFSET UNITYSDK_OFFSET(0x147C32F0)
#define DDGHJCBMHPJ_NFFPDHHMNPF_OFFSET UNITYSDK_OFFSET(0x147C3750)
#define DDGHJCBMHPJ_ONSTART_OFFSET UNITYSDK_OFFSET(0x147C29F0)
#define DDGHJCBMHPJ_PAFBHIBENBL_OFFSET UNITYSDK_OFFSET(0x147C2FA0)
#define DDGHJCBMHPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147C2B40)

inline static constexpr unsigned int DDGHJCBMHPJ_TypeDefinitionIndex = 50951;

class DDGHJCBMHPJ : public ::JGELKBLKFHE
{
public:
	::DOINNMGICOF_1<::System::Object*>* OOJAGALMOJC; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* CLKIJKPHPFI; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* AOEKDFGHDIJ; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* JMCODBJENPI; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* IBGHOIKKIPM; // 0x38
	::System::Int32 HANJJBEJEDH; // 0x40
	::ALFALGGEGBI IGCGJHNOCJL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_ONSTART_OFFSET))(this);
	}

	::System::Void GEFKOOALCBN(::ALFALGGEGBI GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::ALFALGGEGBI))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_GEFKOOALCBN_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void AFDIKODCCOE(::System::Int32 GNKFBJJOLIC, ::System::Boolean ALHLLECDLBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_AFDIKODCCOE_OFFSET))(this, GNKFBJJOLIC, ALHLLECDLBM);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void PAFBHIBENBL(::MACFPEHHKLH* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::MACFPEHHKLH*))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_PAFBHIBENBL_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Void KHCJDBIDECP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_KHCJDBIDECP_OFFSET))(this);
	}

	::System::Void GNFMEKHAICK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_GNFMEKHAICK_OFFSET))(this);
	}

	::DDGHJCBMHPJ_OMFNJLHJIGI* NFFPDHHMNPF(::System::Int32 GNKFBJJOLIC)
	{
		return ((::DDGHJCBMHPJ_OMFNJLHJIGI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_NFFPDHHMNPF_OFFSET))(this, GNKFBJJOLIC);
	}

	::System::Void DCOGDBODMAA(::PGHMLDBLALH* EAGDBOHMCNN)
	{
		return ((::System::Void(*)(::PVOID, ::PGHMLDBLALH*))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_DCOGDBODMAA_OFFSET))(this, EAGDBOHMCNN);
	}

	::System::Void FPPMJINLGGI(::System::Int32 GNKFBJJOLIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_FPPMJINLGGI_OFFSET))(this, GNKFBJJOLIC);
	}
};
