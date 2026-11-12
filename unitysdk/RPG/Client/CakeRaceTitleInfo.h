#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceTitleData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACETITLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD2876C0)
#define RPG_CLIENT_CAKERACETITLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD288290)
#define RPG_CLIENT_CAKERACETITLEINFO_GETTITLE_OFFSET UNITYSDK_OFFSET(0xD27E9D0)
#define RPG_CLIENT_CAKERACETITLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD2878C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceTitleInfo_TypeDefinitionIndex = 64505;

	class CakeRaceTitleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceTitleData*>* _TitleMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceTitleData* GetTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceTitleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_GETTITLE_OFFSET))(this, a1);
		}

	};
}
