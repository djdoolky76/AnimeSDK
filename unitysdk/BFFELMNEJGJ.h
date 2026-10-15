#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class ENGFCDJAFCG;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightRole; }

#define BFFELMNEJGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB162280)
#define BFFELMNEJGJ_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0xB162310)

inline static constexpr unsigned int BFFELMNEJGJ_TypeDefinitionIndex = 65140;

	class BFFELMNEJGJ : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x10
		::ENGFCDJAFCG* IGBMGBIDHOD; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BFFELMNEJGJ_CTOR_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + BFFELMNEJGJ_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};
