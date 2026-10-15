#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class RogueTournSetCollectionBoothPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define ACEBNEIMIFH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB118E40)
#define ACEBNEIMIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB118560)
#define ACEBNEIMIFH_ENEMGILIKLB_OFFSET UNITYSDK_OFFSET(0xB118D60)
#define ACEBNEIMIFH_OMJDPKMFKOA_OFFSET UNITYSDK_OFFSET(0xB118CA0)
#define ACEBNEIMIFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB118590)

inline static constexpr unsigned int ACEBNEIMIFH_TypeDefinitionIndex = 58496;

	class ACEBNEIMIFH
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_KNAEBCKGLHP()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "ACEBNEIMIFH")->GetStaticField(0x110C0);
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
