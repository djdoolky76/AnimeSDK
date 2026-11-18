#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/System/ValueTuple_2.h"

class ABFDJPPBLHF;
class DFEFCOAAPGK;
class EAIOHODECAO;
class EBKCIHGKLNC;
class GMOCGDKJFCE;
class GPJAEBDGJAG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NGPNKFOLAEE_ECGDNCEHJIO_OFFSET UNITYSDK_OFFSET(0x1E1D4210)
#define NGPNKFOLAEE_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1E1D2EF0)
#define NGPNKFOLAEE_EMLHFCAJIEN_OFFSET UNITYSDK_OFFSET(0x1E1D4160)
#define NGPNKFOLAEE_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x1E1D36C0)
#define NGPNKFOLAEE_HICCDOCPLAC_OFFSET UNITYSDK_OFFSET(0x1E1D3730)
#define NGPNKFOLAEE_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1E1D2F60)
#define NGPNKFOLAEE_MHJPDIOLNBE_OFFSET UNITYSDK_OFFSET(0x1E1BB490)
#define NGPNKFOLAEE_NBBJALHCPPC_OFFSET UNITYSDK_OFFSET(0x1E1D37C0)
#define NGPNKFOLAEE_NDEJEHIDAAF_OFFSET UNITYSDK_OFFSET(0x1E1D3070)
#define NGPNKFOLAEE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1E1D2DE0)
#define NGPNKFOLAEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D2FF0)

inline static constexpr unsigned int NGPNKFOLAEE_TypeDefinitionIndex = 94030;

class NGPNKFOLAEE : public ::MHOBPPAJKIL
{
public:
	::GMOCGDKJFCE* FHIOPFNMGDF; // 0x18
	::EBKCIHGKLNC* EBNOMENIJFE; // 0x20
	::Il2CppArray<::Il2CppArray<::System::Object*>*>* GLPJFGFOMDP; // 0x28
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CAGICEJHFPN; // 0x30
	::System::Int32 NPGOHMCMGCN; // 0x38
	::System::Int32 BJDOHMHLEIC; // 0x3C
	::System::Int32 JEECKNJICBE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Int32 NDEJEHIDAAF(::ABFDJPPBLHF* ECDNGPDBEEG)
	{
		return ((::System::Int32(*)(::PVOID, ::ABFDJPPBLHF*))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_NDEJEHIDAAF_OFFSET))(this, ECDNGPDBEEG);
	}

	::DFEFCOAAPGK* EODBBODDHIL()
	{
		return ((::DFEFCOAAPGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_EODBBODDHIL_OFFSET))(this);
	}

	::System::Void HICCDOCPLAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_HICCDOCPLAC_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_EMCPPBMEKKK_OFFSET))(this);
	}

	::Il2CppArray<::System::Object*>* EMLHFCAJIEN()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_EMLHFCAJIEN_OFFSET))(this);
	}

	::GPJAEBDGJAG* MHJPDIOLNBE(::System::Int32 NJCMPIIGHCJ)
	{
		return ((::GPJAEBDGJAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_MHJPDIOLNBE_OFFSET))(this, NJCMPIIGHCJ);
	}

	::System::Void NBBJALHCPPC(::System::Int32 NPAKMAGBOCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_NBBJALHCPPC_OFFSET))(this, NPAKMAGBOCH);
	}

	::System::Int32 ECGDNCEHJIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNKFOLAEE_ECGDNCEHJIO_OFFSET))(this);
	}
};
