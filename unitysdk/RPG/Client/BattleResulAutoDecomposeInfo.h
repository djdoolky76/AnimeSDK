#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIOALDPOLJE;
class LMDPKOELKFL;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1B9690)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD1B8B40)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET UNITYSDK_OFFSET(0xD1B95F0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0xD1B9170)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0xD1B90B0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET UNITYSDK_OFFSET(0xD1B8DF0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET UNITYSDK_OFFSET(0xD1B91D0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD1B8BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResulAutoDecomposeInfo_TypeDefinitionIndex = 64323;

	class BattleResulAutoDecomposeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* DecomposeElements; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DecomposedRelicIDs; // 0x18
		::System::Boolean IsExceedLimit; // 0x20
		static ::RPG::Client::BattleResulAutoDecomposeInfo** StaticGet_DefaultDecomposeInfo()
		{
			return (::RPG::Client::BattleResulAutoDecomposeInfo**)UnitySDK::FromName("RPG.Client", "BattleResulAutoDecomposeInfo")->GetStaticField(0x58880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_CCTOR_OFFSET))();
		}

		::System::Void Sync(::LMDPKOELKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMDPKOELKFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Merge(::RPG::Client::BattleResulAutoDecomposeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResulAutoDecomposeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET))(this, a1);
		}

		::System::Boolean IsItemDecomposed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET))(this, a1);
		}

		::System::Boolean HasItemDecomposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET))(this);
		}

		::System::Void SetRewardComposeDescText(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET))(this, a1);
		}

		::LIOALDPOLJE* GetDecomposedElement(::System::UInt32 a1)
		{
			return ((::LIOALDPOLJE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET))(this, a1);
		}

	};
}
