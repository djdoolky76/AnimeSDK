#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OFAKEFLLHNP;

#define LBBMGLLFGGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B28E660)
#define LBBMGLLFGGP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B28E760)
#define LBBMGLLFGGP_MEDLNGKACMG_OFFSET UNITYSDK_OFFSET(0x1B28E700)
#define LBBMGLLFGGP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1B28E670)

inline static constexpr unsigned int LBBMGLLFGGP_TypeDefinitionIndex = 63944;

	class LBBMGLLFGGP : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LBBMGLLFGGP_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LBBMGLLFGGP_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* MEDLNGKACMG(::RPG::GameCore::FixPoint a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LBBMGLLFGGP_MEDLNGKACMG_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBMGLLFGGP_KHGIKBFDLFB_OFFSET))(this);
		}

	};
