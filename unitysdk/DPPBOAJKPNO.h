#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJLOCEMJNK.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class IBFIJCLEIPP;
class LFDNJFMJNEN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define DPPBOAJKPNO_BJOCLAKLJBH_OFFSET UNITYSDK_OFFSET(0x16BC7AC0)
#define DPPBOAJKPNO_BPPBPCLMKGI_OFFSET UNITYSDK_OFFSET(0x16BC7A60)
#define DPPBOAJKPNO_CHCPFLJIMND_OFFSET UNITYSDK_OFFSET(0x16BC7BC0)
#define DPPBOAJKPNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BC6FE0)
#define DPPBOAJKPNO_EGOOCAJEFNK_OFFSET UNITYSDK_OFFSET(0x16BC7930)
#define DPPBOAJKPNO_JONCFFKEHEA_OFFSET UNITYSDK_OFFSET(0x16BC73C0)
#define DPPBOAJKPNO_LDCPAHNJCAE_OFFSET UNITYSDK_OFFSET(0x16BC7740)
#define DPPBOAJKPNO_MMBJJDOKGFG_OFFSET UNITYSDK_OFFSET(0x16BC7060)
#define DPPBOAJKPNO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC7020)
#define DPPBOAJKPNO__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC6E70)

inline static constexpr unsigned int DPPBOAJKPNO_TypeDefinitionIndex = 66574;

class DPPBOAJKPNO : public ::System::Object
{
public:
	static ::System::String** StaticGet_PGECJPOGAPP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DPPBOAJKPNO_TypeDefinitionIndex)->GetStaticField(0x4CDC0);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::GalGame::GalgameFilterType, ::System::ValueTuple_2<::System::String*, ::System::String*>>* DEOAOMBIDBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPBOAJKPNO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPPBOAJKPNO__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_DISPOSE_OFFSET))(this);
	}

	::IBFIJCLEIPP* MMBJJDOKGFG(::MoleMole::GalGame::GalgameFilterType JPLCHNLDPNI, ::System::String* KIAPIANMIEO, ::DAJLOCEMJNK MDKMECPGPCN)
	{
		return ((::IBFIJCLEIPP*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::System::String*, ::DAJLOCEMJNK))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_MMBJJDOKGFG_OFFSET))(this, JPLCHNLDPNI, KIAPIANMIEO, MDKMECPGPCN);
	}

	::System::Void BPPBPCLMKGI(::LFDNJFMJNEN* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::PVOID, ::LFDNJFMJNEN*))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_BPPBPCLMKGI_OFFSET))(this, PNPMMLNCDNK);
	}

	::System::Void EGOOCAJEFNK(::IBFIJCLEIPP* EPACJIDPIFK, ::System::String* KIAPIANMIEO)
	{
		return ((::System::Void(*)(::PVOID, ::IBFIJCLEIPP*, ::System::String*))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_EGOOCAJEFNK_OFFSET))(this, EPACJIDPIFK, KIAPIANMIEO);
	}

	::System::Void LDCPAHNJCAE(::DAJLOCEMJNK MDKMECPGPCN, ::UnityEngine::Material*& BFJMEAPNDPF, ::Foundation::AssetRequestHandle& JFIICDCDGEM)
	{
		return ((::System::Void(*)(::PVOID, ::DAJLOCEMJNK, ::UnityEngine::Material*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_LDCPAHNJCAE_OFFSET))(this, MDKMECPGPCN, BFJMEAPNDPF, JFIICDCDGEM);
	}

	::System::String* BJOCLAKLJBH(::DAJLOCEMJNK MDKMECPGPCN)
	{
		return ((::System::String*(*)(::PVOID, ::DAJLOCEMJNK))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_BJOCLAKLJBH_OFFSET))(this, MDKMECPGPCN);
	}

	::System::Void JONCFFKEHEA(::MoleMole::GalGame::GalgameFilterType GKNBCPNBFLH, ::UnityEngine::Material*& KDJLBKNOJJE, ::Foundation::AssetRequestHandle& JFMADLONCPD, ::UnityEngine::Material*& BFJMEAPNDPF, ::Foundation::AssetRequestHandle& JFIICDCDGEM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::UnityEngine::Material*&, ::Foundation::AssetRequestHandle&, ::UnityEngine::Material*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_JONCFFKEHEA_OFFSET))(this, GKNBCPNBFLH, KDJLBKNOJJE, JFMADLONCPD, BFJMEAPNDPF, JFIICDCDGEM);
	}

	::LFDNJFMJNEN* CHCPFLJIMND(::MoleMole::GalGame::GalgameFilterType GKNBCPNBFLH)
	{
		return ((::LFDNJFMJNEN*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + DPPBOAJKPNO_CHCPFLJIMND_OFFSET))(this, GKNBCPNBFLH);
	}
};
