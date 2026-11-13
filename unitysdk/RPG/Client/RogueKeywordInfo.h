#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCNEFGJCCMB;
class LFLMJKLKBIL;
class OHHKEOGOMCA;
namespace RPG::Client { class RogueKeywordData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEKEYWORDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC08CB0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC07CF0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYBUFFID_OFFSET UNITYSDK_OFFSET(0x1CC07EC0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYFORMULAID_OFFSET UNITYSDK_OFFSET(0x1CC08500)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYBUFFID_OFFSET UNITYSDK_OFFSET(0x1CC07D60)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYFORMULAID_OFFSET UNITYSDK_OFFSET(0x1CC083A0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GETROGUEKEYWORDDATA_OFFSET UNITYSDK_OFFSET(0x1CC07970)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_ACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0x1CC08A90)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_ISKEYOPEN_OFFSET UNITYSDK_OFFSET(0x1CC089E0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_GET_KEYWORDDATALIST_OFFSET UNITYSDK_OFFSET(0x1CC076F0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNCACTIVATE_OFFSET UNITYSDK_OFFSET(0x1CC07AA0)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNCDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1CC07C90)
#define RPG_CLIENT_ROGUEKEYWORDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1CC07130)
#define RPG_CLIENT_ROGUEKEYWORDINFO__SORT_OFFSET UNITYSDK_OFFSET(0x1CC07760)
#define RPG_CLIENT_ROGUEKEYWORDINFO__UPDATEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1CC07B00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordInfo_TypeDefinitionIndex = 69209;

	class RogueKeywordInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* _KeywordDataList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::OHHKEOGOMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RogueKeywordData* GetRogueKeywordData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETROGUEKEYWORDDATA_OFFSET))(this, a1);
		}

		::System::Void SyncActivate(::HCNEFGJCCMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCNEFGJCCMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNCACTIVATE_OFFSET))(this, a1);
		}

		::System::Void SyncDeactivate(::LFLMJKLKBIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFLMJKLKBIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_SYNCDEACTIVATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetKeywordExtraEffectIDListByBuffID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYBUFFID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetKeywordExtraEffectIDListByFormulaID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDEXTRAEFFECTIDLISTBYFORMULAID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* GetKeywordDataListByBuffID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYBUFFID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* GetKeywordDataListByFormulaID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GETKEYWORDDATALISTBYFORMULAID_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateActivate(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__UPDATEACTIVATE_OFFSET))(this, a1, a2);
		}

		::System::Void _Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO__SORT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>* get_KeywordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueKeywordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GET_KEYWORDDATALIST_OFFSET))(this);
		}

		::System::Boolean get_IsKeyOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GET_ISKEYOPEN_OFFSET))(this);
		}

		::System::UInt32 get_ActivateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO_GET_ACTIVATECOUNT_OFFSET))(this);
		}

	};
}
