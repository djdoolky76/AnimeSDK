#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/System/Object.h"
class HMFMCGDHBIO;
class PNBBKAAFIBK;
namespace RPG::Client { class IGridFightEquipTrackTarget; }

#define JLDBELHGIID_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17B40AC0)
#define JLDBELHGIID_CCTOR_OFFSET UNITYSDK_OFFSET(0x17B40B50)

inline static constexpr unsigned int JLDBELHGIID_TypeDefinitionIndex = 67112;

	class JLDBELHGIID : public ::System::Object
	{
	public:
		static ::HMFMCGDHBIO** StaticGet_JAEMLLJLFPP()
		{
			return (::HMFMCGDHBIO**)UnitySDK::FromName("", "JLDBELHGIID")->GetStaticField(0x17950);
		}

		static ::PNBBKAAFIBK** StaticGet_NCKHAPLPEEA()
		{
			return (::PNBBKAAFIBK**)UnitySDK::FromName("", "JLDBELHGIID")->GetStaticField(0x17958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLDBELHGIID_CCTOR_OFFSET))();
		}

		static ::RPG::Client::IGridFightEquipTrackTarget* BPLPBPMEODA(::IHMJHLGKLHP a1)
		{
			return ((::RPG::Client::IGridFightEquipTrackTarget*(*)(::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + JLDBELHGIID_BPLPBPMEODA_OFFSET))(a1);
		}

	};
