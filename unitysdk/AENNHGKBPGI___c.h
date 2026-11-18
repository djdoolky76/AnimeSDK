#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define AENNHGKBPGI___C_PJPOAGPBINO_OFFSET UNITYSDK_OFFSET(0x17DD2580)
#define AENNHGKBPGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DD2530)
#define AENNHGKBPGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD2570)

inline static constexpr unsigned int AENNHGKBPGI___c_TypeDefinitionIndex = 79399;

class AENNHGKBPGI___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell>, ::System::ValueTuple_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell>>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell>, ::System::ValueTuple_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell>>**)Il2CppClass::FromTypeDefinitionIndex(AENNHGKBPGI___c_TypeDefinitionIndex)->GetStaticField(0x4E000);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AENNHGKBPGI___c_TypeDefinitionIndex)->GetStaticField(0x4E008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AENNHGKBPGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNHGKBPGI___C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell> PJPOAGPBINO(::System::Collections::Generic::KeyValuePair_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell> DLBHJOGKNOC)
	{
		return ((::System::ValueTuple_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::EAOGLMKGMGE, ::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + AENNHGKBPGI___C_PJPOAGPBINO_OFFSET))(this, DLBHJOGKNOC);
	}
};
