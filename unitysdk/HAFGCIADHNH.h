#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAJKLEIGOOA_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }

#define HAFGCIADHNH_ANBICKOHFJG_OFFSET UNITYSDK_OFFSET(0x17E24AE0)
#define HAFGCIADHNH_DIPCLMAHAEO_OFFSET UNITYSDK_OFFSET(0x17E254F0)
#define HAFGCIADHNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E224F0)
#define HAFGCIADHNH_EDNOMBDJOIO_OFFSET UNITYSDK_OFFSET(0x17E22860)
#define HAFGCIADHNH_EFELMDOHJBA_OFFSET UNITYSDK_OFFSET(0x17E231F0)
#define HAFGCIADHNH_ENBLOMFHKMD_OFFSET UNITYSDK_OFFSET(0x17E23350)
#define HAFGCIADHNH_FGEBCMLDMOD_OFFSET UNITYSDK_OFFSET(0x17E23F20)
#define HAFGCIADHNH_GOACAJKCLAD_OFFSET UNITYSDK_OFFSET(0x17E24100)
#define HAFGCIADHNH_ICBJBIJNLDF_OFFSET UNITYSDK_OFFSET(0x17E252F0)
#define HAFGCIADHNH_IFLNNBDHOJM_OFFSET UNITYSDK_OFFSET(0x17E24A40)
#define HAFGCIADHNH_JGCDJPGKKKE_OFFSET UNITYSDK_OFFSET(0x17E22B90)
#define HAFGCIADHNH_JKGLMKFDLBJ_OFFSET UNITYSDK_OFFSET(0x17E24F40)
#define HAFGCIADHNH_JLKIILJFCGG_OFFSET UNITYSDK_OFFSET(0x17E24700)
#define HAFGCIADHNH_KOEGDHCGNOG_OFFSET UNITYSDK_OFFSET(0x17E22F80)
#define HAFGCIADHNH_LCNBEOEKKNO_OFFSET UNITYSDK_OFFSET(0x17E22C70)
#define HAFGCIADHNH_NBFJCEIPFHL_OFFSET UNITYSDK_OFFSET(0x17E22620)
#define HAFGCIADHNH_ONCREATE_OFFSET UNITYSDK_OFFSET(0x17E22720)
#define HAFGCIADHNH_PAJDJINEGOL_OFFSET UNITYSDK_OFFSET(0x17E226B0)
#define HAFGCIADHNH_PBFPGGAPEBG_OFFSET UNITYSDK_OFFSET(0x17E242F0)
#define HAFGCIADHNH_PCDGJACLOCJ_OFFSET UNITYSDK_OFFSET(0x17E23D10)
#define HAFGCIADHNH_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x17E24B20)
#define HAFGCIADHNH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E22B80)
#define HAFGCIADHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x17E22AB0)

inline static constexpr unsigned int HAFGCIADHNH_TypeDefinitionIndex = 76831;

class HAFGCIADHNH
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>** StaticGet_FCGFNCPNBBD()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(HAFGCIADHNH_TypeDefinitionIndex)->GetStaticField(0x463E0);
	}
	static ::HAFGCIADHNH** StaticGet_FBEKCLCADOB()
	{
		return (::HAFGCIADHNH**)Il2CppClass::FromTypeDefinitionIndex(HAFGCIADHNH_TypeDefinitionIndex)->GetStaticField(0x463E8);
	}
	static ::HAFGCIADHNH** StaticGet_EGMCPBJJHEK()
	{
		return (::HAFGCIADHNH**)Il2CppClass::FromTypeDefinitionIndex(HAFGCIADHNH_TypeDefinitionIndex)->GetStaticField(0x463F0);
	}
	static ::System::Boolean* StaticGet_AINHNLOGCKB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HAFGCIADHNH_TypeDefinitionIndex)->GetStaticField(0x10350);
	}
	static ::System::Boolean* StaticGet_LEMMMDJMOJO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HAFGCIADHNH_TypeDefinitionIndex)->GetStaticField(0x10351);
	}
	::System::Collections::Generic::HashSet_1<::MoleMole::MonoRenderHandler*>* IONEIBBFPID; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* BCKJIMAAGOJ; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>* HNFJDPNHAOF; // 0x20
	::System::Collections::Generic::List_1<::LAJKLEIGOOA_1<::MoleMole::MonoRenderHandler*>>* GDMAMJHKKDH; // 0x28
	::Unity::Collections::ManagedBlockQueue_1<::System::Int32>* KJIOOEKHMDD; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandler*>* BMNGFECAPBK; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::MonoRenderHandlerForAvatar*>* LIJMFNPLIAL; // 0x40
	::Unity::Collections::ManagedBlockQueue_1<::System::Object*>* MHCIMLPGOKF; // 0x48
	::Unity::Jobs::JobHandle NLPELLPDMDL; // 0x50
	::System::Boolean AMGFFJHIKPC; // 0x60
	::System::Boolean LJMGHFHFDIH; // 0x61
	::System::Boolean KJCKDPCKPBE; // 0x62
	::System::Boolean FICILJDKGNN; // 0x63
	::System::Boolean OAHGNFILFMI; // 0x64
	::System::Byte _padding0[0x3];
	::Unity::Jobs::JobHandle IPEBEMGBLLF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFGCIADHNH__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_ONCREATE_OFFSET))(this);
	}

	::System::Void JGCDJPGKKKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_JGCDJPGKKKE_OFFSET))(this);
	}

	::System::Void LCNBEOEKKNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_LCNBEOEKKNO_OFFSET))(this);
	}

	static ::System::Void EFELMDOHJBA(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HAFGCIADHNH_EFELMDOHJBA_OFFSET))(ABHBKFJKINO);
	}

	::System::Void ENBLOMFHKMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_ENBLOMFHKMD_OFFSET))(this);
	}

	::System::Void PCDGJACLOCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_PCDGJACLOCJ_OFFSET))(this);
	}

	::System::Void JLKIILJFCGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_JLKIILJFCGG_OFFSET))(this);
	}

	static ::System::Void IFLNNBDHOJM(::System::Int32 DDAKJOGIPGI)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HAFGCIADHNH_IFLNNBDHOJM_OFFSET))(DDAKJOGIPGI);
	}

	::System::Void ANBICKOHFJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_ANBICKOHFJG_OFFSET))(this);
	}

	::System::Void EDNOMBDJOIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_EDNOMBDJOIO_OFFSET))(this);
	}

	::System::Void FGEBCMLDMOD(::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + HAFGCIADHNH_FGEBCMLDMOD_OFFSET))(this, AOKHOHCJNFJ);
	}

	static ::System::Boolean NBFJCEIPFHL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFGCIADHNH_NBFJCEIPFHL_OFFSET))();
	}

	::System::Void GOACAJKCLAD(::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + HAFGCIADHNH_GOACAJKCLAD_OFFSET))(this, AOKHOHCJNFJ);
	}

	::System::Void PBFPGGAPEBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_PBFPGGAPEBG_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Void JKGLMKFDLBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_JKGLMKFDLBJ_OFFSET))(this);
	}

	::System::Void ICBJBIJNLDF(::MoleMole::MonoRenderHandler* PLJPFMJAGNC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + HAFGCIADHNH_ICBJBIJNLDF_OFFSET))(this, PLJPFMJAGNC);
	}

	::System::Void DIPCLMAHAEO(::MoleMole::MonoRenderHandler* PLJPFMJAGNC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + HAFGCIADHNH_DIPCLMAHAEO_OFFSET))(this, PLJPFMJAGNC);
	}

	::System::Void PAJDJINEGOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_PAJDJINEGOL_OFFSET))(this);
	}

	::System::Void KOEGDHCGNOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFGCIADHNH_KOEGDHCGNOG_OFFSET))(this);
	}
};
