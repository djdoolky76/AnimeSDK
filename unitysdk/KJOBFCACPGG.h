#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIBMJLOJLKD;
class JALEECFEILF;
namespace MoleMole { class UIGroceryActivityPageController; }

#define KJOBFCACPGG_BFIKLBBDBOG_OFFSET UNITYSDK_OFFSET(0x16346A10)
#define KJOBFCACPGG_JHCJEHEIEIL_OFFSET UNITYSDK_OFFSET(0x163465C0)
#define KJOBFCACPGG_KJGGIHCKIGK_OFFSET UNITYSDK_OFFSET(0x163467C0)
#define KJOBFCACPGG__CTOR_OFFSET UNITYSDK_OFFSET(0x16346540)

inline static constexpr unsigned int KJOBFCACPGG_TypeDefinitionIndex = 65042;

class KJOBFCACPGG : public ::System::Object
{
public:
	// static const ::System::String* NACALAMEEJP; // 0x0
	// static const ::System::String* FPKJOAPJDHO; // 0x0
	::MoleMole::UIGroceryActivityPageController* BJIMJEEHFKM; // 0x10
	::JALEECFEILF* KMMKMGDHCOI; // 0x18
	::System::Int32 MFIONBMNPCC; // 0x20
	::System::Boolean NIOELOOKCCG; // 0x24

	::System::Void _ctor(::MoleMole::UIGroceryActivityPageController* BJIMJEEHFKM, ::GIBMJLOJLKD* GNMGDCANBJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGroceryActivityPageController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + KJOBFCACPGG__CTOR_OFFSET))(this, BJIMJEEHFKM, GNMGDCANBJG);
	}

	::System::Void JHCJEHEIEIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOBFCACPGG_JHCJEHEIEIL_OFFSET))(this);
	}

	::System::Void KJGGIHCKIGK(::System::Int32 EJKHEBIEKDE, ::System::Int32 MFIONBMNPCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KJOBFCACPGG_KJGGIHCKIGK_OFFSET))(this, EJKHEBIEKDE, MFIONBMNPCC);
	}

	::System::Void BFIKLBBDBOG(::System::Boolean CGEMLHFPINP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJOBFCACPGG_BFIKLBBDBOG_OFFSET))(this, CGEMLHFPINP);
	}
};
