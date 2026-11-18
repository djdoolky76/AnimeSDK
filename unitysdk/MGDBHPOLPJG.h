#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

#define MGDBHPOLPJG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18537C90)
#define MGDBHPOLPJG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18537EB0)
#define MGDBHPOLPJG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x18537E20)
#define MGDBHPOLPJG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18537D60)
#define MGDBHPOLPJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18537CE0)
#define MGDBHPOLPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x18537E10)

inline static constexpr unsigned int MGDBHPOLPJG_TypeDefinitionIndex = 74045;

class MGDBHPOLPJG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x225; // 0x0
	::MoleMole::HollowChessboard::RenderDataHandle CCHANCHEOLH; // 0x50
	::MoleMole::HollowChessboard::HollowChessboardUID PJMAOJIAPIL; // 0x60
	::System::Boolean DOHIAIHHLIA; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGDBHPOLPJG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDBHPOLPJG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDBHPOLPJG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDBHPOLPJG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDBHPOLPJG_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MGDBHPOLPJG* JFDOOELFAOA()
	{
		return ((::MGDBHPOLPJG*(*)())((::PBYTE)hIl2Cpp + MGDBHPOLPJG_JFDOOELFAOA_OFFSET))();
	}
};
