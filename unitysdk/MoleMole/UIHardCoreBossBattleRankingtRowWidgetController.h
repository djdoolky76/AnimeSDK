#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FKMFLDDCPEE;
class JDDHAHBFBMI;
class MOMJIGGHFHD;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18CBF230)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18CBEFF0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18CBF090)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_SETSELFDATA_OFFSET UNITYSDK_OFFSET(0x18CBF2A0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBF370)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18CBF380)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18CBF420)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingtRowWidgetController_TypeDefinitionIndex = 54431;

	class UIHardCoreBossBattleRankingtRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetSelfData(::JDDHAHBFBMI* selfInfo, ::FKMFLDDCPEE* selfRankInfo, ::System::Int32 selfFriendRankIndex)
		{
			return ((::System::Void(*)(::PVOID, ::JDDHAHBFBMI*, ::FKMFLDDCPEE*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_SETSELFDATA_OFFSET))(this, selfInfo, selfRankInfo, selfFriendRankIndex);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::MOMJIGGHFHD* OGMPOGIHBIK()
		{
			return ((::MOMJIGGHFHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
