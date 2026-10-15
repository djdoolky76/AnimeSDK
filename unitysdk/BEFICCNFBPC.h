#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OFAKEFLLHNP;

#define BEFICCNFBPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16306A70)
#define BEFICCNFBPC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16306B30)
#define BEFICCNFBPC_MEDLNGKACMG_OFFSET UNITYSDK_OFFSET(0x16306AD0)
#define BEFICCNFBPC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x16306A80)

inline static constexpr unsigned int BEFICCNFBPC_TypeDefinitionIndex = 62530;

	class BEFICCNFBPC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BEFICCNFBPC_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BEFICCNFBPC_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* MEDLNGKACMG(::RPG::GameCore::FixPoint a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BEFICCNFBPC_MEDLNGKACMG_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFICCNFBPC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
