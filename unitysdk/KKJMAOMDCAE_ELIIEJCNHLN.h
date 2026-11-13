#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
class KKJMAOMDCAE_GCBHILPADCJ;
class KKJMAOMDCAE_IGHHCHHPGFD;
namespace System { class String; }

#define KKJMAOMDCAE_ELIIEJCNHLN_BKGGFCGMLBD_OFFSET UNITYSDK_OFFSET(0x17354270)
#define KKJMAOMDCAE_ELIIEJCNHLN_CTOR_OFFSET UNITYSDK_OFFSET(0x17354340)
#define KKJMAOMDCAE_ELIIEJCNHLN_JJHAHNOHOGF_OFFSET UNITYSDK_OFFSET(0x173542C0)

inline static constexpr unsigned int KKJMAOMDCAE_ELIIEJCNHLN_TypeDefinitionIndex = 66321;

	class KKJMAOMDCAE_ELIIEJCNHLN : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::KKJMAOMDCAE_GCBHILPADCJ* EarlyRoles; // 0x18
		::Il2CppArray<::System::UInt32>* CoreEquips; // 0x20
		::Il2CppArray<::System::UInt32>* SecondaryAugments; // 0x28
		::System::String* Description; // 0x30
		::Il2CppArray<::System::String*>* Tags; // 0x38
		::System::String* Lang; // 0x40
		::System::String* ShareCode; // 0x48
		::System::String* Author; // 0x50
		::Il2CppArray<::System::UInt32>* Portals; // 0x58
		::Il2CppArray<::System::UInt32>* PrimaryAugments; // 0x60
		::KKJMAOMDCAE_GCBHILPADCJ* MiddleRoles; // 0x68
		::Il2CppArray<::System::UInt32>* BasicEquips; // 0x70
		::KKJMAOMDCAE_IGHHCHHPGFD* FinalRoles; // 0x78
		::System::UInt32 TimeStamp; // 0x80
		::System::UInt32 RecentLikeCnt; // 0x84
		::RPG::Client::MongoObjectId NJFKHPIHDEF; // 0x88
		::System::Int32 level; // 0x94
		::System::UInt32 RecentUseCnt; // 0x98
		::System::Single Weight; // 0x9C
		::System::UInt32 RecentFavourCnt; // 0xA0
		::System::UInt32 LikeCountForSort; // 0xA4
		::System::UInt32 FavourCnt; // 0xA8
		::System::UInt32 SubSeasonID; // 0xAC
		::System::UInt32 SeasonID; // 0xB0
		::System::Boolean IsFavour; // 0xB4
		::System::Boolean IsSupportHard; // 0xB5
		::System::Boolean IsLike; // 0xB6
		::System::Byte _padding0[0x1];
		::System::UInt32 GameVersion; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_ELIIEJCNHLN_CTOR_OFFSET))(this);
		}

		::System::String* BKGGFCGMLBD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_ELIIEJCNHLN_BKGGFCGMLBD_OFFSET))(this);
		}

		::System::Void JJHAHNOHOGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_ELIIEJCNHLN_JJHAHNOHOGF_OFFSET))(this, a1);
		}

	};
