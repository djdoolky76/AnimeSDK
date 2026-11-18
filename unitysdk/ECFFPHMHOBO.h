#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class DGDPGBJJMDN;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECFFPHMHOBO_CIGAFEBOOFG_OFFSET UNITYSDK_OFFSET(0x132B1110)
#define ECFFPHMHOBO_DKDFFCHALFE_OFFSET UNITYSDK_OFFSET(0x16130A50)
#define ECFFPHMHOBO_ECIDHDHLOEK_OFFSET UNITYSDK_OFFSET(0x16130940)
#define ECFFPHMHOBO_HBIHLKHJKGF_OFFSET UNITYSDK_OFFSET(0x161308D0)
#define ECFFPHMHOBO_NEOBBMACHAN_OFFSET UNITYSDK_OFFSET(0x16130870)
#define ECFFPHMHOBO_PFHLIEBMDBN_OFFSET UNITYSDK_OFFSET(0x161309A0)
#define ECFFPHMHOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x132B1000)

inline static constexpr unsigned int ECFFPHMHOBO_TypeDefinitionIndex = 50471;

class ECFFPHMHOBO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* ADFAPNPLNAA; // 0x10
	::DGDPGBJJMDN* CNEPEGDBNBJ; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID BIJIPJPJJPJ; // 0x20

	::System::Void _ctor(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECFFPHMHOBO__CTOR_OFFSET))(this, AOCOIDIMLIH);
	}

	::System::Boolean CIGAFEBOOFG(::System::Int32 FAKHCNLCBCE, ::System::String* KNFBPBMOCHN, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& NFBIEEPHGFB, ::System::String*& OOGMFIFAMDI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&, ::System::String*&))((::PBYTE)hIl2Cpp + ECFFPHMHOBO_CIGAFEBOOFG_OFFSET))(this, FAKHCNLCBCE, KNFBPBMOCHN, NFBIEEPHGFB, OOGMFIFAMDI);
	}

	::System::Void NEOBBMACHAN(::MoleMole::HollowChessboard::HollowChessboardUID ACHBBPJIBIE, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* ENHAPPJACEM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + ECFFPHMHOBO_NEOBBMACHAN_OFFSET))(this, ACHBBPJIBIE, ENHAPPJACEM);
	}

	::System::Int32 HBIHLKHJKGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFPHMHOBO_HBIHLKHJKGF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ECIDHDHLOEK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFFPHMHOBO_ECIDHDHLOEK_OFFSET))(this);
	}

	::System::Boolean PFHLIEBMDBN(::System::Int32 FAKHCNLCBCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECFFPHMHOBO_PFHLIEBMDBN_OFFSET))(this, FAKHCNLCBCE);
	}

	::System::Boolean DKDFFCHALFE(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& NFBIEEPHGFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&))((::PBYTE)hIl2Cpp + ECFFPHMHOBO_DKDFFCHALFE_OFFSET))(this, NFBIEEPHGFB);
	}
};
