#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class RogueTournSetCollectionBoothPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define ACEBNEIMIFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x18288360)
#define ACEBNEIMIFH_CTOR_OFFSET UNITYSDK_OFFSET(0x18287A80)
#define ACEBNEIMIFH_ENEMGILIKLB_OFFSET UNITYSDK_OFFSET(0x18288280)
#define ACEBNEIMIFH_OMJDPKMFKOA_OFFSET UNITYSDK_OFFSET(0x182881C0)
#define ACEBNEIMIFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18287AB0)

inline static constexpr unsigned int ACEBNEIMIFH_TypeDefinitionIndex = 59752;

	class ACEBNEIMIFH
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_KNAEBCKGLHP()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "ACEBNEIMIFH")->GetStaticField(0xCC10);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*))((::PBYTE)hIl2Cpp + ACEBNEIMIFH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEBNEIMIFH_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEBNEIMIFH_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournCollectionInfo* OMJDPKMFKOA()
		{
			return ((::RPG::Client::RogueTournCollectionInfo*(*)())((::PBYTE)hIl2Cpp + ACEBNEIMIFH_OMJDPKMFKOA_OFFSET))();
		}

		static ::System::Int32 ENEMGILIKLB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ACEBNEIMIFH_ENEMGILIKLB_OFFSET))();
		}

	};
