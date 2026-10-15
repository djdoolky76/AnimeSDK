#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengeData; }
namespace System { class Nullable; }

#define LNOJJNADOPF_ADDBNLEMIPH_OFFSET UNITYSDK_OFFSET(0xB7EA9A0)
#define LNOJJNADOPF_ELEPHGGHMGE_OFFSET UNITYSDK_OFFSET(0xB7EA910)
#define LNOJJNADOPF_IPNNBGEDMLA_OFFSET UNITYSDK_OFFSET(0xB7EA5E0)
#define LNOJJNADOPF_KFDIKLPJKBJ_OFFSET UNITYSDK_OFFSET(0xB7EA490)
#define LNOJJNADOPF_LLCPADKAFPB_OFFSET UNITYSDK_OFFSET(0xB7EA870)
#define LNOJJNADOPF_MELGIOBCLGH_OFFSET UNITYSDK_OFFSET(0xB7EA8C0)
#define LNOJJNADOPF_MIDKBHMIDDO_OFFSET UNITYSDK_OFFSET(0xB7EAA30)

inline static constexpr unsigned int LNOJJNADOPF_TypeDefinitionIndex = 63122;

	class LNOJJNADOPF : public ::System::Object
	{
	public:
		static ::System::Nullable* KFDIKLPJKBJ()
		{
			return ((::System::Nullable*(*)())((::PBYTE)hIl2Cpp + LNOJJNADOPF_KFDIKLPJKBJ_OFFSET))();
		}

		static ::RPG::Client::ChallengeData* IPNNBGEDMLA()
		{
			return ((::RPG::Client::ChallengeData*(*)())((::PBYTE)hIl2Cpp + LNOJJNADOPF_IPNNBGEDMLA_OFFSET))();
		}

		static ::System::Boolean LLCPADKAFPB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNOJJNADOPF_LLCPADKAFPB_OFFSET))();
		}

		static ::System::Boolean MELGIOBCLGH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNOJJNADOPF_MELGIOBCLGH_OFFSET))();
		}

		static ::System::Boolean ELEPHGGHMGE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNOJJNADOPF_ELEPHGGHMGE_OFFSET))();
		}

		static ::System::Boolean ADDBNLEMIPH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNOJJNADOPF_ADDBNLEMIPH_OFFSET))();
		}

		static ::System::Boolean MIDKBHMIDDO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNOJJNADOPF_MIDKBHMIDDO_OFFSET))(a1);
		}

	};
