#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"

class IIDJIBPPNDA;
class KOIDMLPJGML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x17C75870)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x17C758C0)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETSPECIAL_OFFSET UNITYSDK_OFFSET(0x17C76630)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x17C76490)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_PLHMDJBMOEC_OFFSET UNITYSDK_OFFSET(0x17C76350)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C76870)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MAX_1_1_OFFSET UNITYSDK_OFFSET(0x17C76480)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MIN_1_2_OFFSET UNITYSDK_OFFSET(0x17C76470)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETSPECIAL_OFFSET UNITYSDK_OFFSET(0x17C76880)
#define MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x17C76910)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelBattleInfoWidgetController_TypeDefinitionIndex = 66608;

	class UIMarcelBattleInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewards);
		}

		::System::String* GetTitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETTITLETEXT_OFFSET))(this);
		}

		::IIDJIBPPNDA* GetSpecial()
		{
			return ((::IIDJIBPPNDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_GETSPECIAL_OFFSET))(this);
		}

		static ::System::Int32 _FillRewardMap_g__Max_1_1(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MAX_1_1_OFFSET))(x, y);
		}

		static ::System::Int32 _FillRewardMap_g__Min_1_2(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER__FILLREWARDMAP_G__MIN_1_2_OFFSET))(x, y);
		}

		::IIDJIBPPNDA* __base_GetSpecial()
		{
			return ((::IIDJIBPPNDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETSPECIAL_OFFSET))(this);
		}

		::System::String* __base_GetTitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER___BASE_GETTITLETEXT_OFFSET))(this);
		}

		static ::System::Int32 PLHMDJBMOEC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELBATTLEINFOWIDGETCONTROLLER_PLHMDJBMOEC_OFFSET))();
		}
	};
}
