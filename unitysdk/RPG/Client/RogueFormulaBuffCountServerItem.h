#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueFormulaBuffCountItemBase.h"
class CBDMGEGELFM;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDF000A0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xDF00280)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET UNITYSDK_OFFSET(0xDF00300)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_REQUIREDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xDF002C0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xDF00120)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCCONDITION_OFFSET UNITYSDK_OFFSET(0xDF000B0)

namespace RPG::Client
{
	class RogueFormulaBuffCountServerItem : public ::RPG::Client::RogueFormulaBuffCountItemBase
	{
	public:
		::System::Int32 _AchievedBuffCount; // 0x18
		::System::Int32 _RequiredBuffCount; // 0x1C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncCondition(::CBDMGEGELFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBDMGEGELFM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCCONDITION_OFFSET))(this, a1);
		}

		::System::Void SyncBuffCount(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCBUFFCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_AchievedBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_RequiredBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_REQUIREDBUFFCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBuffCountSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET))(this);
		}

	};
}
