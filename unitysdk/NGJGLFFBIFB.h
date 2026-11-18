#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKKDCFLLIOF;
class JNJDDELLIAH;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGJGLFFBIFB_AAECALDBDPC_OFFSET UNITYSDK_OFFSET(0x16B709B0)
#define NGJGLFFBIFB_BCLMJLIBOCA_OFFSET UNITYSDK_OFFSET(0x16B705B0)
#define NGJGLFFBIFB_CIOGOEPDAGC_OFFSET UNITYSDK_OFFSET(0x16B70900)
#define NGJGLFFBIFB_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x16B6E600)
#define NGJGLFFBIFB_DJJGNAKKLGA_OFFSET UNITYSDK_OFFSET(0x16B6F2A0)
#define NGJGLFFBIFB_EPCFFCNOCKB_OFFSET UNITYSDK_OFFSET(0x16B6F4F0)
#define NGJGLFFBIFB_FGJJLECKDCA_OFFSET UNITYSDK_OFFSET(0x16B6EDD0)
#define NGJGLFFBIFB_FHCCLNAEINC_OFFSET UNITYSDK_OFFSET(0x16B70110)
#define NGJGLFFBIFB_FHINDONLOPB_OFFSET UNITYSDK_OFFSET(0x16B6E980)
#define NGJGLFFBIFB_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B6E460)
#define NGJGLFFBIFB_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x16B6ECC0)
#define NGJGLFFBIFB_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x16B6ECD0)
#define NGJGLFFBIFB_HAHEABDKFOM_OFFSET UNITYSDK_OFFSET(0x16B6EC10)
#define NGJGLFFBIFB_HHEKMOEDBMM_OFFSET UNITYSDK_OFFSET(0x16B6E8E0)
#define NGJGLFFBIFB_HNODJOOGEKO_OFFSET UNITYSDK_OFFSET(0x16B70480)
#define NGJGLFFBIFB_IOFPLOPFGCI_OFFSET UNITYSDK_OFFSET(0x16B6E9E0)
#define NGJGLFFBIFB_IPMACNPDNON_OFFSET UNITYSDK_OFFSET(0x16B6E880)
#define NGJGLFFBIFB_JIKKCOCEIFH_OFFSET UNITYSDK_OFFSET(0x16B6FB00)
#define NGJGLFFBIFB_JLNAIIHENFD_OFFSET UNITYSDK_OFFSET(0x16B6EB10)
#define NGJGLFFBIFB_KEGFOJIBHCB_OFFSET UNITYSDK_OFFSET(0x16B6FE90)
#define NGJGLFFBIFB_LPGGDFJMOEO_OFFSET UNITYSDK_OFFSET(0x16B6F9C0)
#define NGJGLFFBIFB_MHBMPABEELH_OFFSET UNITYSDK_OFFSET(0x16B6FD40)
#define NGJGLFFBIFB_MNIIFNAONLJ_OFFSET UNITYSDK_OFFSET(0x16B708E0)
#define NGJGLFFBIFB_NJJDMCMPKJC_OFFSET UNITYSDK_OFFSET(0x16B707E0)
#define NGJGLFFBIFB_NLMEFOBJKFO_OFFSET UNITYSDK_OFFSET(0x16B6FB60)
#define NGJGLFFBIFB_PLOAKKAOBLE_OFFSET UNITYSDK_OFFSET(0x16B6F5A0)
#define NGJGLFFBIFB_PNHCFIAJIIN_OFFSET UNITYSDK_OFFSET(0x16B6FC90)
#define NGJGLFFBIFB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B6E530)
#define NGJGLFFBIFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6E580)

inline static constexpr unsigned int NGJGLFFBIFB_TypeDefinitionIndex = 61551;

class NGJGLFFBIFB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* GLFALKHGKPM; // 0x10
	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* CLNBMBJGCCO; // 0x18
	::System::Action_2<::System::Int32, ::IKKDCFLLIOF*>* EKJHLBIOLJB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::IKKDCFLLIOF*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::IKKDCFLLIOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Boolean DFGOJHPONDC(::System::Int32 ABHBKFJKINO, ::IKKDCFLLIOF* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_DFGOJHPONDC_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA);
	}

	::System::Boolean IOFPLOPFGCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_IOFPLOPFGCI_OFFSET))(this);
	}

	::System::Void HAHEABDKFOM(::System::Action_2<::System::Int32, ::IKKDCFLLIOF*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::IKKDCFLLIOF*>*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_HAHEABDKFOM_OFFSET))(this, EJGDHCIBCJH);
	}

	::IKKDCFLLIOF* GLOAAACBNPP(::System::Int32 ABHBKFJKINO)
	{
		return ((::IKKDCFLLIOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_GLOAAACBNPP_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean FGJJLECKDCA(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_FGJJLECKDCA_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Void EPCFFCNOCKB(::System::Action_1<::System::Int32>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_EPCFFCNOCKB_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void HHEKMOEDBMM(::IKKDCFLLIOF* LJBPECKCCEA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::IKKDCFLLIOF*, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_HHEKMOEDBMM_OFFSET))(this, LJBPECKCCEA, ABHBKFJKINO);
	}

	::System::Boolean PLOAKKAOBLE(::System::Int32 ABHBKFJKINO, ::IKKDCFLLIOF* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_PLOAKKAOBLE_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA);
	}

	::System::Void JIKKCOCEIFH(::System::Int32 ABHBKFJKINO, ::IKKDCFLLIOF* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_JIKKCOCEIFH_OFFSET))(this, ABHBKFJKINO, EGEGIMGMJHN);
	}

	::System::Boolean NLMEFOBJKFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_NLMEFOBJKFO_OFFSET))(this);
	}

	::System::Int32 PNHCFIAJIIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_PNHCFIAJIIN_OFFSET))(this);
	}

	::System::Int32 MHBMPABEELH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_MHBMPABEELH_OFFSET))(this);
	}

	::System::Void KEGFOJIBHCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_KEGFOJIBHCB_OFFSET))(this);
	}

	::System::Boolean FHCCLNAEINC(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_FHCCLNAEINC_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Boolean HNODJOOGEKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_HNODJOOGEKO_OFFSET))(this);
	}

	::System::Void BCLMJLIBOCA(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_BCLMJLIBOCA_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Int32 NJJDMCMPKJC(::IKKDCFLLIOF* LJBPECKCCEA)
	{
		return ((::System::Int32(*)(::PVOID, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_NJJDMCMPKJC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Int32 MNIIFNAONLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_MNIIFNAONLJ_OFFSET))(this);
	}

	::System::Boolean IPMACNPDNON(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_IPMACNPDNON_OFFSET))(this, ABHBKFJKINO);
	}

	::IKKDCFLLIOF* GPAGOABIFFP(::System::Int32 ABHBKFJKINO)
	{
		return ((::IKKDCFLLIOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_GPAGOABIFFP_OFFSET))(this, ABHBKFJKINO);
	}

	::JNJDDELLIAH* JLNAIIHENFD()
	{
		return ((::JNJDDELLIAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_JLNAIIHENFD_OFFSET))(this);
	}

	::System::Void CIOGOEPDAGC(::System::Action_2<::System::Int32, ::IKKDCFLLIOF*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::IKKDCFLLIOF*>*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_CIOGOEPDAGC_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void FHINDONLOPB(::System::Int32 ABHBKFJKINO, ::IKKDCFLLIOF* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_FHINDONLOPB_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA);
	}

	::System::Boolean LPGGDFJMOEO(::System::Int32 ABHBKFJKINO, ::System::Int32& IKEEJMHPNNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_LPGGDFJMOEO_OFFSET))(this, ABHBKFJKINO, IKEEJMHPNNP);
	}

	::System::Void AAECALDBDPC(::System::Action_1<::System::Int32>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_AAECALDBDPC_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean DJJGNAKKLGA(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO, ::System::Int32& IKEEJMHPNNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NGJGLFFBIFB_DJJGNAKKLGA_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, IKEEJMHPNNP);
	}
};
