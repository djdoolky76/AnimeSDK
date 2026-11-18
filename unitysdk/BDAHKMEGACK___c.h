#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class AEOGAMDLCGG;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BDAHKMEGACK___C_HLLDGILFILP_OFFSET UNITYSDK_OFFSET(0xF7904D0)
#define BDAHKMEGACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF790480)
#define BDAHKMEGACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7904C0)

inline static constexpr unsigned int BDAHKMEGACK___c_TypeDefinitionIndex = 91987;

class BDAHKMEGACK___c : public ::System::Object
{
public:
	static ::System::Func_2<::AEOGAMDLCGG*, ::MoleMole::HollowChessboard::HollowCell>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::AEOGAMDLCGG*, ::MoleMole::HollowChessboard::HollowCell>**)Il2CppClass::FromTypeDefinitionIndex(BDAHKMEGACK___c_TypeDefinitionIndex)->GetStaticField(0x30B90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDAHKMEGACK___c_TypeDefinitionIndex)->GetStaticField(0x30B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDAHKMEGACK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAHKMEGACK___C__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell HLLDGILFILP(::AEOGAMDLCGG* EJCBEJMGFAJ)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::AEOGAMDLCGG*))((::PBYTE)hIl2Cpp + BDAHKMEGACK___C_HLLDGILFILP_OFFSET))(this, EJCBEJMGFAJ);
	}
};
