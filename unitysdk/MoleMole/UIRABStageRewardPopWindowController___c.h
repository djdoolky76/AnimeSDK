#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMGNIIFFJBP;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BC0A30)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC0A70)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__GETSORTEDQUESTLIST_B__47_0_OFFSET UNITYSDK_OFFSET(0x17BC0AD0)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__INITSTAGEDATA_B__42_0_OFFSET UNITYSDK_OFFSET(0x17BC0A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageRewardPopWindowController___c_TypeDefinitionIndex = 54561;

	class UIRABStageRewardPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRABStageRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x451D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABStageRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x451D8);
		}
		static ::System::Comparison_1<::HMGNIIFFJBP*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::HMGNIIFFJBP*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABStageRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x451E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitStageData_b__42_0(::HMGNIIFFJBP* a, ::HMGNIIFFJBP* b)
		{
			return ((::System::Int32(*)(::PVOID, ::HMGNIIFFJBP*, ::HMGNIIFFJBP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__INITSTAGEDATA_B__42_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetSortedQuestList_b__47_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__GETSORTEDQUESTLIST_B__47_0_OFFSET))(this, a, b);
		}
	};
}
