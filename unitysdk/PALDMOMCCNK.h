#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAdventureSettingConflictShowInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PALDMOMCCNK_APCNFHOHMPP_OFFSET UNITYSDK_OFFSET(0xBFCA6C0)
#define PALDMOMCCNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCA820)
#define PALDMOMCCNK_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xBFCA670)
#define PALDMOMCCNK_OLNIGDNNKLM_OFFSET UNITYSDK_OFFSET(0xBFCA750)

inline static constexpr unsigned int PALDMOMCCNK_TypeDefinitionIndex = 64213;

	class PALDMOMCCNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* BMHFJFONNKC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALDMOMCCNK_CTOR_OFFSET))(this);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALDMOMCCNK_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Boolean APCNFHOHMPP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PALDMOMCCNK_APCNFHOHMPP_OFFSET))(this, a1);
		}

		::RPG::Client::IAdventureSettingConflictShowInfo* OLNIGDNNKLM(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PALDMOMCCNK_OLNIGDNNKLM_OFFSET))(this, a1, a2);
		}

	};
