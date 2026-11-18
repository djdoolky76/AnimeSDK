#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMBJNJLPEJO.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/PNCLPIAOEGL.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIBLLGOJFHK_BAHLFOCAPBJ_OFFSET UNITYSDK_OFFSET(0x12FED1C0)
#define NIBLLGOJFHK_BKOEEIBMDOC_OFFSET UNITYSDK_OFFSET(0x12FED230)
#define NIBLLGOJFHK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12FECEE0)
#define NIBLLGOJFHK_JDNPIDECHID_OFFSET UNITYSDK_OFFSET(0x12FECFF0)
#define NIBLLGOJFHK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12FED020)
#define NIBLLGOJFHK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12FED0C0)
#define NIBLLGOJFHK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12FECE10)
#define NIBLLGOJFHK_PDPLEOONLDP_OFFSET UNITYSDK_OFFSET(0x12FED000)
#define NIBLLGOJFHK_PFLFBMNCKHK_OFFSET UNITYSDK_OFFSET(0x12FED150)
#define NIBLLGOJFHK__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FECF30)
#define NIBLLGOJFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x12FECFB0)

inline static constexpr unsigned int NIBLLGOJFHK_TypeDefinitionIndex = 78267;

class NIBLLGOJFHK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Single PHBABBGOCAP; // 0x0
	// static const ::System::Single MECCJFPHDBJ; // 0x0
	// static const ::System::Single CBLGEOILJOB; // 0x0
	// static const ::System::Single HPIPBCELLCP; // 0x0
	// static const ::System::Single FDGKPMLNHFP; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x1F; // 0x0
	::MGHNAPKHBOG MAFOIPODCAA; // 0x48
	::System::Collections::Generic::List_1<::PNCLPIAOEGL>* JNMAAFKDPIL; // 0x60
	::System::String* CDPPIDPFHOG; // 0x68
	::System::Boolean CBICCCEIDIN; // 0x70
	::System::Byte _padding0[0x3];
	::LMBJNJLPEJO MLGFOBOOCAC; // 0x74
	::System::Single AEFJKNJNLDF; // 0x78
	::System::Single FJNABEDFBIM; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIBLLGOJFHK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_GETCLASSID_OFFSET))(this);
	}

	::OAMAMDGEJKH* JDNPIDECHID()
	{
		return ((::OAMAMDGEJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_JDNPIDECHID_OFFSET))(this);
	}

	::MGHNAPKHBOG PDPLEOONLDP()
	{
		return ((::MGHNAPKHBOG(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_PDPLEOONLDP_OFFSET))(this);
	}

	static ::NIBLLGOJFHK* JFDOOELFAOA()
	{
		return ((::NIBLLGOJFHK*(*)())((::PBYTE)hIl2Cpp + NIBLLGOJFHK_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean PFLFBMNCKHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_PFLFBMNCKHK_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* BAHLFOCAPBJ()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_BAHLFOCAPBJ_OFFSET))(this);
	}

	::System::Void BKOEEIBMDOC(::MGHNAPKHBOG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + NIBLLGOJFHK_BKOEEIBMDOC_OFFSET))(this, EGEGIMGMJHN);
	}
};
