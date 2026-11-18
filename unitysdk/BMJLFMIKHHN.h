#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class MAFGFDMEHOG;
class MEHLONLGMGK;
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define BMJLFMIKHHN_DAKOBKPIABO_OFFSET UNITYSDK_OFFSET(0x1425D560)
#define BMJLFMIKHHN_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1425DF30)
#define BMJLFMIKHHN_EMIOGEOCBBC_OFFSET UNITYSDK_OFFSET(0x1425E560)
#define BMJLFMIKHHN_IJODEEMGIBP_OFFSET UNITYSDK_OFFSET(0x1425DD20)
#define BMJLFMIKHHN_JHHBHLMJLHB_OFFSET UNITYSDK_OFFSET(0x1425D910)
#define BMJLFMIKHHN_LBHJLFGDCGG_OFFSET UNITYSDK_OFFSET(0x1425D390)
#define BMJLFMIKHHN_MDFPGDINIFJ_OFFSET UNITYSDK_OFFSET(0x1425E5F0)
#define BMJLFMIKHHN_OFEAMPFEEFF_OFFSET UNITYSDK_OFFSET(0x1425DBE0)
#define BMJLFMIKHHN_OFLKEFHAJMN_OFFSET UNITYSDK_OFFSET(0x1425D470)
#define BMJLFMIKHHN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1425D380)
#define BMJLFMIKHHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1425D2F0)

inline static constexpr unsigned int BMJLFMIKHHN_TypeDefinitionIndex = 75029;

class BMJLFMIKHHN : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LBBLJIBDJJN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BMJLFMIKHHN_TypeDefinitionIndex)->GetStaticField(0x108B0);
	}
	// static const ::System::String* CLJHFCECHMJ; // 0x0
	::System::Action* PMBAGLHEMDP; // 0x10
	::System::Action* EKDOCFMLPJD; // 0x18
	::System::Int32 ADAPJNGKEEA; // 0x20
	::System::Int32 NMPKJJIOFEM; // 0x24
	::System::Single KGGJCGPMAIH; // 0x28
	::System::Int32 BEHLEPIKENB; // 0x2C
	::System::Boolean KELDKFMLMJK; // 0x30
	::System::Boolean IEDKBBBCDDJ; // 0x31
	::System::Boolean NOCHNKPIALM; // 0x32

	::System::Void _ctor(::System::Int32 BHLLNMDGIAH, ::System::Int32 KKFBNAGOPPJ, ::System::Boolean BMCBPHPFLNL, ::System::Action* KECECDPKCAO, ::System::Action* IMGIGPLKPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN__CTOR_OFFSET))(this, BHLLNMDGIAH, KKFBNAGOPPJ, BMCBPHPFLNL, KECECDPKCAO, IMGIGPLKPNN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJLFMIKHHN__CCTOR_OFFSET))();
	}

	::System::String* LBHJLFGDCGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_LBHJLFGDCGG_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OFLKEFHAJMN(::MAFGFDMEHOG* FMLBOLDFLKE, ::System::Int32 MAEHALJGINN, ::MEHLONLGMGK* KCHFCGEOAGP, ::MoleMole::UIBaseController* LJHKADLMMMF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MAFGFDMEHOG*, ::System::Int32, ::MEHLONLGMGK*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_OFLKEFHAJMN_OFFSET))(this, FMLBOLDFLKE, MAEHALJGINN, KCHFCGEOAGP, LJHKADLMMMF);
	}

	::System::Void DAKOBKPIABO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_DAKOBKPIABO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void JHHBHLMJLHB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_JHHBHLMJLHB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IJODEEMGIBP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_IJODEEMGIBP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void OFEAMPFEEFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_OFEAMPFEEFF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask EMIOGEOCBBC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_EMIOGEOCBBC_OFFSET))(this);
	}

	::System::Void MDFPGDINIFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_MDFPGDINIFJ_OFFSET))(this);
	}
};
