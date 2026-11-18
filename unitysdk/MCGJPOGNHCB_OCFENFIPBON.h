#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class BGDCIMONJIP;
class OBKNEEOLOPB;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCGJPOGNHCB_OCFENFIPBON_AFBCJDKHEGC_OFFSET UNITYSDK_OFFSET(0x14049F30)
#define MCGJPOGNHCB_OCFENFIPBON_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14049DC0)
#define MCGJPOGNHCB_OCFENFIPBON_HKDDHIAAJDH_OFFSET UNITYSDK_OFFSET(0x14049EE0)
#define MCGJPOGNHCB_OCFENFIPBON_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14049E40)
#define MCGJPOGNHCB_OCFENFIPBON__CTOR_OFFSET UNITYSDK_OFFSET(0x14049DB0)

inline static constexpr unsigned int MCGJPOGNHCB_OCFENFIPBON_TypeDefinitionIndex = 46837;

class MCGJPOGNHCB_OCFENFIPBON : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BGDCIMONJIP*>* IEPHIBIJHKJ; // 0x10
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OCFENFIPBON__CTOR_OFFSET))(this, BONICGBNDAA);
	}

	::System::Collections::Generic::IEnumerator_1<::BGDCIMONJIP*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::BGDCIMONJIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OCFENFIPBON_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OCFENFIPBON_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void HKDDHIAAJDH(::System::Collections::Generic::List_1<::BGDCIMONJIP*>* IEPHIBIJHKJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BGDCIMONJIP*>*))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OCFENFIPBON_HKDDHIAAJDH_OFFSET))(this, IEPHIBIJHKJ);
	}

	::System::Void AFBCJDKHEGC(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MCGJPOGNHCB_OCFENFIPBON_AFBCJDKHEGC_OFFSET))(this, BONICGBNDAA);
	}
};
