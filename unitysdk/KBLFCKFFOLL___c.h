#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IMBCHCBBOFJ;
namespace System { template <typename T> class Action_1; }

#define KBLFCKFFOLL___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x16330830)
#define KBLFCKFFOLL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163307E0)
#define KBLFCKFFOLL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16330820)

inline static constexpr unsigned int KBLFCKFFOLL___c_TypeDefinitionIndex = 51420;

class KBLFCKFFOLL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBLFCKFFOLL___c_TypeDefinitionIndex)->GetStaticField(0x3B750);
	}
	static ::System::Action_1<::IMBCHCBBOFJ*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::IMBCHCBBOFJ*>**)Il2CppClass::FromTypeDefinitionIndex(KBLFCKFFOLL___c_TypeDefinitionIndex)->GetStaticField(0x3B758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBLFCKFFOLL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCKFFOLL___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::IMBCHCBBOFJ* LFPLKBLDMKN)
	{
		return ((::System::Void(*)(::PVOID, ::IMBCHCBBOFJ*))((::PBYTE)hIl2Cpp + KBLFCKFFOLL___C_AIKNDJKJEKN_OFFSET))(this, LFPLKBLDMKN);
	}
};
