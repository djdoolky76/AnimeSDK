#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBEGCLNJFP.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class DLJAPCBDKLM;
class FOHHIICFBPC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBGECGKKLKD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFD9E8C0)
#define PBGECGKKLKD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFD9ECA0)
#define PBGECGKKLKD_KPPGGCFCFMA_OFFSET UNITYSDK_OFFSET(0xFD9EBC0)
#define PBGECGKKLKD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFD9EC10)
#define PBGECGKKLKD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFD9E990)
#define PBGECGKKLKD__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD9E910)
#define PBGECGKKLKD__CTOR_OFFSET UNITYSDK_OFFSET(0xFD9EAF0)

inline static constexpr unsigned int PBGECGKKLKD_TypeDefinitionIndex = 74265;

class PBGECGKKLKD : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x23A; // 0x0
	::FOHHIICFBPC* AAOAFGILGCE; // 0x50
	::System::Collections::Generic::List_1<::DLJAPCBDKLM*>* IONMAGIPGAH; // 0x58
	::DLJAPCBDKLM* EIPGNLLEPIG; // 0x60
	::System::String* OMGLFIMLEJG; // 0x68
	::System::String* OLPNFMOJEOB; // 0x70
	::MoleMole::HollowChessboard::RenderDataHandle DLMJIFDFJBK; // 0x78
	::System::Int32 KPKIJEKEPHM; // 0x88
	::System::Int32 DPJLKNKHIKA; // 0x8C
	::System::Int32 BAJGJIGILJL; // 0x90
	::JEBEGCLNJFP PGBPFNKMLJF; // 0x94
	::System::Int32 MCMMAPMPBGM; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBGECGKKLKD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGECGKKLKD__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGECGKKLKD_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGECGKKLKD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 KPPGGCFCFMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGECGKKLKD_KPPGGCFCFMA_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGECGKKLKD_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::PBGECGKKLKD* JFDOOELFAOA()
	{
		return ((::PBGECGKKLKD*(*)())((::PBYTE)hIl2Cpp + PBGECGKKLKD_JFDOOELFAOA_OFFSET))();
	}
};
