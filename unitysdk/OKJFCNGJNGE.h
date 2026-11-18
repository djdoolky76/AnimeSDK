#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class EEBDEMDFFKA;

#define OKJFCNGJNGE_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0xF19A5F0)
#define OKJFCNGJNGE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF19A340)
#define OKJFCNGJNGE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xF19A690)
#define OKJFCNGJNGE_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0xF19A5E0)
#define OKJFCNGJNGE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xF19A600)
#define OKJFCNGJNGE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF19A410)
#define OKJFCNGJNGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF19A390)
#define OKJFCNGJNGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF19A500)

inline static constexpr unsigned int OKJFCNGJNGE_TypeDefinitionIndex = 66996;

class OKJFCNGJNGE : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x201; // 0x0
	::EEBDEMDFFKA* CIBDADOIPCJ; // 0x50
	::MoleMole::HollowChessboard::RenderDataHandle IAFHBCHLBME; // 0x58
	::EEBDEMDFFKA* _FJAAAAACINE_k__BackingField; // 0x68
	::System::Boolean BBDJAFMCNJN; // 0x70
	::System::Boolean FOGOJFOPCOI; // 0x71

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKJFCNGJNGE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJFCNGJNGE__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJFCNGJNGE_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJFCNGJNGE_ONCLEAN_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::EEBDEMDFFKA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EEBDEMDFFKA*))((::PBYTE)hIl2Cpp + OKJFCNGJNGE_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::EEBDEMDFFKA* BLIOCCCNKDK()
	{
		return ((::EEBDEMDFFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJFCNGJNGE_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJFCNGJNGE_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OKJFCNGJNGE* JFDOOELFAOA()
	{
		return ((::OKJFCNGJNGE*(*)())((::PBYTE)hIl2Cpp + OKJFCNGJNGE_JFDOOELFAOA_OFFSET))();
	}
};
