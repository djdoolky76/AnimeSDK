#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BALFGKABMCH;
namespace System { template <typename T> class Action_1; }

#define BBDHGBOEKDJ___C_IIEEFLONCHJ_OFFSET UNITYSDK_OFFSET(0x1437EFD0)
#define BBDHGBOEKDJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1437EF80)
#define BBDHGBOEKDJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1437EFC0)

inline static constexpr unsigned int BBDHGBOEKDJ___c_TypeDefinitionIndex = 70785;

class BBDHGBOEKDJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BBDHGBOEKDJ___c_TypeDefinitionIndex)->GetStaticField(0x36D50);
	}
	static ::System::Action_1<::BALFGKABMCH*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::BALFGKABMCH*>**)Il2CppClass::FromTypeDefinitionIndex(BBDHGBOEKDJ___c_TypeDefinitionIndex)->GetStaticField(0x36D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBDHGBOEKDJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ___C__CTOR_OFFSET))(this);
	}

	::System::Void IIEEFLONCHJ(::BALFGKABMCH* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BALFGKABMCH*))((::PBYTE)hIl2Cpp + BBDHGBOEKDJ___C_IIEEFLONCHJ_OFFSET))(this, GBELIHABEDH);
	}
};
