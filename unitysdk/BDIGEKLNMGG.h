#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKLCNICJJOB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BDIGEKLNMGG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x13620C20)
#define BDIGEKLNMGG_BPLCBBMJIBL_OFFSET UNITYSDK_OFFSET(0x13621650)
#define BDIGEKLNMGG_DMJNAKLIGOK_OFFSET UNITYSDK_OFFSET(0x136210D0)
#define BDIGEKLNMGG_DPIHCPBLACB_OFFSET UNITYSDK_OFFSET(0x13621A80)
#define BDIGEKLNMGG_EJCIECKBCFK_OFFSET UNITYSDK_OFFSET(0x1361FC00)
#define BDIGEKLNMGG_HBNMKOELAAD_OFFSET UNITYSDK_OFFSET(0x1361F940)
#define BDIGEKLNMGG_HLPDILOBOFA_OFFSET UNITYSDK_OFFSET(0x1361F920)
#define BDIGEKLNMGG_HODLEAPCFIN_OFFSET UNITYSDK_OFFSET(0x13620970)
#define BDIGEKLNMGG_IBHLNIJEEGN_OFFSET UNITYSDK_OFFSET(0x13620540)
#define BDIGEKLNMGG_ILCNOGINGED_OFFSET UNITYSDK_OFFSET(0x1361F680)
#define BDIGEKLNMGG_LELPHEIGELG_OFFSET UNITYSDK_OFFSET(0x1361FE30)
#define BDIGEKLNMGG_MEBGPGHJMPO_OFFSET UNITYSDK_OFFSET(0x13620160)
#define BDIGEKLNMGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1361F670)
#define BDIGEKLNMGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1361F310)

inline static constexpr unsigned int BDIGEKLNMGG_TypeDefinitionIndex = 74801;

class BDIGEKLNMGG : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_FAEMMHANFCK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BDIGEKLNMGG_TypeDefinitionIndex)->GetStaticField(0x11F80);
	}
	::UnityEngine::GameObject* ICNFOGDBFIA; // 0x10
	::System::Collections::Generic::Dictionary_2<::GKLCNICJJOB, ::System::Object*>* GKPMNOLOAPJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::GKLCNICJJOB, ::System::Object*>* NOBOAKOCELA; // 0x20
	::System::Collections::Generic::Dictionary_2<::GKLCNICJJOB, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* DOLJPPNCLDG; // 0x28
	::System::Collections::Generic::List_1<::System::Type*>* HCDFLBEHHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::GKLCNICJJOB, ::UnityEngine::Transform*>* FCAKIHDCLNI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDIGEKLNMGG__CCTOR_OFFSET))();
	}

	static ::GKLCNICJJOB ILCNOGINGED(::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::GKLCNICJJOB(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_ILCNOGINGED_OFFSET))(AEJBCMBCDJE);
	}

	::UnityEngine::Transform* HLPDILOBOFA()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_HLPDILOBOFA_OFFSET))(this);
	}

	::UnityEngine::GameObject* HBNMKOELAAD(::GKLCNICJJOB BODDNOJAOFG)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::GKLCNICJJOB))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_HBNMKOELAAD_OFFSET))(this, BODDNOJAOFG);
	}

	::System::Void EJCIECKBCFK(::MoleMole::UIWidgetController* FPPPIIFJOBO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_EJCIECKBCFK_OFFSET))(this, FPPPIIFJOBO);
	}

	::System::Void MEBGPGHJMPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_MEBGPGHJMPO_OFFSET))(this);
	}

	::UnityEngine::Transform* HODLEAPCFIN(::GKLCNICJJOB MCOHLHMKLIP, ::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::GKLCNICJJOB, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_HODLEAPCFIN_OFFSET))(this, MCOHLHMKLIP, AEJBCMBCDJE);
	}

	::System::Void IBHLNIJEEGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_IBHLNIJEEGN_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void LELPHEIGELG(::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_LELPHEIGELG_OFFSET))(this, AEJBCMBCDJE);
	}

	::System::Void DMJNAKLIGOK(::GKLCNICJJOB BODDNOJAOFG, ::UnityEngine::GameObject* NGLKIKLLLFL, ::System::Boolean JGKIKBPOFJE)
	{
		return ((::System::Void(*)(::PVOID, ::GKLCNICJJOB, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_DMJNAKLIGOK_OFFSET))(this, BODDNOJAOFG, NGLKIKLLLFL, JGKIKBPOFJE);
	}

	::System::Void BPLCBBMJIBL(::MoleMole::UIWindowController* OJFAFEGNLOH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_BPLCBBMJIBL_OFFSET))(this, OJFAFEGNLOH);
	}

	::System::Boolean DPIHCPBLACB(::GKLCNICJJOB BODDNOJAOFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::GKLCNICJJOB))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_DPIHCPBLACB_OFFSET))(this, BODDNOJAOFG);
	}
};
