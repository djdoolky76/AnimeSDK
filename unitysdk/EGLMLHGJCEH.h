#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOMJDICEKPN;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGLMLHGJCEH_BEGBDLPPCJA_OFFSET UNITYSDK_OFFSET(0x148DE8E0)
#define EGLMLHGJCEH_CHGNDIPLEKH_OFFSET UNITYSDK_OFFSET(0x148DEAD0)
#define EGLMLHGJCEH_CKOBFCPJHPF_OFFSET UNITYSDK_OFFSET(0x148DEBB0)
#define EGLMLHGJCEH_EBEEBPFNEGI_OFFSET UNITYSDK_OFFSET(0x148DEB40)
#define EGLMLHGJCEH_IKGNCIANFJH_OFFSET UNITYSDK_OFFSET(0x148DE5B0)
#define EGLMLHGJCEH_MPGEKCLCEPF_OFFSET UNITYSDK_OFFSET(0x148DEB50)
#define EGLMLHGJCEH_OAPAGLDDIMN_OFFSET UNITYSDK_OFFSET(0x148DE420)
#define EGLMLHGJCEH_OKLBGMADGBD_OFFSET UNITYSDK_OFFSET(0x148DEAE0)
#define EGLMLHGJCEH__CTOR_OFFSET UNITYSDK_OFFSET(0x148DE2D0)

inline static constexpr unsigned int EGLMLHGJCEH_TypeDefinitionIndex = 62917;

class EGLMLHGJCEH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FOMJDICEKPN*>* IMAMHANKEFF; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* ENKGPFOMIME; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* MOHEJOCLFAP; // 0x20
	::System::Int32 KFADOGCIMKJ; // 0x28

	::System::Void _ctor(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGLMLHGJCEH__CTOR_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Boolean OAPAGLDDIMN(::System::Int32 IHOJNIIBOEL, ::System::Int32& ABHBKFJKINO, ::FOMJDICEKPN*& KLEPJGIMABD, ::System::Int32& EAPACGPBLEO, ::System::Boolean& NCHODCGOJLP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::FOMJDICEKPN*&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_OAPAGLDDIMN_OFFSET))(this, IHOJNIIBOEL, ABHBKFJKINO, KLEPJGIMABD, EAPACGPBLEO, NCHODCGOJLP);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* IKGNCIANFJH(::System::Boolean COBGOIOFGGC)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_IKGNCIANFJH_OFFSET))(this, COBGOIOFGGC);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* BEGBDLPPCJA(::System::Boolean COBGOIOFGGC)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_BEGBDLPPCJA_OFFSET))(this, COBGOIOFGGC);
	}

	::System::Int32 CHGNDIPLEKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_CHGNDIPLEKH_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* OKLBGMADGBD()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_OKLBGMADGBD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FOMJDICEKPN*>* EBEEBPFNEGI()
	{
		return ((::System::Collections::Generic::List_1<::FOMJDICEKPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_EBEEBPFNEGI_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* MPGEKCLCEPF()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_MPGEKCLCEPF_OFFSET))(this);
	}

	::System::Boolean CKOBFCPJHPF(::System::Int32 IHOJNIIBOEL, ::FOMJDICEKPN*& KLEPJGIMABD, ::System::Int32& EAPACGPBLEO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOMJDICEKPN*&, ::System::Int32&))((::PBYTE)hIl2Cpp + EGLMLHGJCEH_CKOBFCPJHPF_OFFSET))(this, IHOJNIIBOEL, KLEPJGIMABD, EAPACGPBLEO);
	}
};
