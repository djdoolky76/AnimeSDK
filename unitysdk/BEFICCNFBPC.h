#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OFAKEFLLHNP;

#define BEFICCNFBPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A935130)
#define BEFICCNFBPC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A9351F0)
#define BEFICCNFBPC_MEDLNGKACMG_OFFSET UNITYSDK_OFFSET(0x1A935190)
#define BEFICCNFBPC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1A935140)

inline static constexpr unsigned int BEFICCNFBPC_TypeDefinitionIndex = 63943;

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
