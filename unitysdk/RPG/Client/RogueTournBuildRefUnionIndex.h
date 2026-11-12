#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex_UnionKind.h"
class FCOEMCEDLNL;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CCTOR_OFFSET UNITYSDK_OFFSET(0xEA42150)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_COMPARETOFORSORT_OFFSET UNITYSDK_OFFSET(0xFD9F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATEHTTPID_OFFSET UNITYSDK_OFFSET(0xEA32380)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATESHARECODEARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xEA3A620)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xFDAC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDA10)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEA41F40)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDAA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_ARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xFD980)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_HTTPID_OFFSET UNITYSDK_OFFSET(0xFD930)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_ISKIND_OFFSET UNITYSDK_OFFSET(0xFD9A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xEA418C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xEA41A40)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_ARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xFD990)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_HTTPID_OFFSET UNITYSDK_OFFSET(0xFD950)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOBINARY_OFFSET UNITYSDK_OFFSET(0xFDAE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFDAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefUnionIndex_TypeDefinitionIndex = 69489;

	struct alignas(4) RogueTournBuildRefUnionIndex
	{
		::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind Kind; // 0x10
		::RPG::Client::MongoObjectId _HttpId; // 0x14
		::System::UInt32 _ArchiveSlotId; // 0x14
		static ::RPG::Client::RogueTournBuildRefUnionIndex* StaticGet_Empty()
		{
			return (::RPG::Client::RogueTournBuildRefUnionIndex*)UnitySDK::FromName("RPG.Client", "RogueTournBuildRefUnionIndex")->GetStaticField(0xFB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CCTOR_OFFSET))();
		}

		::RPG::Client::MongoObjectId get_HttpId()
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_HTTPID_OFFSET))(this);
		}

		::System::Void set_HttpId(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_HTTPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ArchiveSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_ARCHIVESLOTID_OFFSET))(this);
		}

		::System::Void set_ArchiveSlotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_ARCHIVESLOTID_OFFSET))(this, a1);
		}

		::System::Boolean IsKind(::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_ISKIND_OFFSET))(this, a1);
		}

		/*
		::System::Int32 CompareToForSort(::RPG::Client::RogueTournBuildRefUnionIndex a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_COMPARETOFORSORT_OFFSET))(this, a1);
		}
		*/

		/*
		static ::RPG::Client::RogueTournBuildRefUnionIndex CreateHttpId(::RPG::Client::MongoObjectId a1)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATEHTTPID_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::RogueTournBuildRefUnionIndex CreateShareCodeArchiveSlotId(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATESHARECODEARCHIVESLOTID_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::Client::RogueTournBuildRefUnionIndex a1, ::RPG::Client::RogueTournBuildRefUnionIndex a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefUnionIndex, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournBuildRefUnionIndex a1, ::RPG::Client::RogueTournBuildRefUnionIndex a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefUnionIndex, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::RPG::Client::RogueTournBuildRefUnionIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void ToBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOBINARY_OFFSET))(this, a1);
		}

		/*
		static ::RPG::Client::RogueTournBuildRefUnionIndex FromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_FROMBINARY_OFFSET))(a1);
		}
		*/

	};
}
