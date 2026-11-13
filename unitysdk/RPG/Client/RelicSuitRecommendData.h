#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class JGJKAIPLMCA;
namespace RPG::Client { class RelicSuitRecommendData; }
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSUITRECOMMENDDATA_CHECKISFETCHAVATARLIST_OFFSET UNITYSDK_OFFSET(0x197305B0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19730AA0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x197302E0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x19730570)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0x19730510)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GETSHOWLIST_OFFSET UNITYSDK_OFFSET(0x197305F0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_GET_SETID_OFFSET UNITYSDK_OFFSET(0x197304F0)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_SET_SETID_OFFSET UNITYSDK_OFFSET(0x19730500)
#define RPG_CLIENT_RELICSUITRECOMMENDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x197307D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicSuitRecommendData_TypeDefinitionIndex = 68839;

	class RelicSuitRecommendData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>* RecommendAvatarList; // 0x10
		::System::String* _IconPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 _SetID_k__BackingField; // 0x30
		::System::Boolean IsFetchAvatarList; // 0x34
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GET_SETID_OFFSET))(this);
		}

		::System::Void set_SetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_SET_SETID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GETNAME_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GETICONPATH_OFFSET))(this);
		}

		::System::Boolean CheckIsFetchAvatarList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_CHECKISFETCHAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>* GetShowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_GETSHOWLIST_OFFSET))(this);
		}

		::System::Void Sync(::JGJKAIPLMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGJKAIPLMCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_SYNC_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSuitRecommendData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSuitRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSUITRECOMMENDDATA_CREATE_OFFSET))(a1);
		}

	};
}
