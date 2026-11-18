#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_NAPINPUT_ATTITUDE_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x10446350)
#define MOLEMOLE_NAPINPUT_ATTITUDE_CGMNBICLFEI_OFFSET UNITYSDK_OFFSET(0x10445D90)
#define MOLEMOLE_NAPINPUT_ATTITUDE_GDCDIIOAKLI_OFFSET UNITYSDK_OFFSET(0x104463E0)
#define MOLEMOLE_NAPINPUT_ATTITUDE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x10445D10)
#define MOLEMOLE_NAPINPUT_ATTITUDE_NHNKBNCHMKP_OFFSET UNITYSDK_OFFSET(0x10445E20)

namespace MoleMole::NAPInput
{
	inline static constexpr unsigned int Attitude_TypeDefinitionIndex = 62601;

	struct alignas(4) Attitude
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C

		/*
		static ::MoleMole::NAPInput::Attitude get_Empty()
		{
			return ((::MoleMole::NAPInput::Attitude(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_GET_EMPTY_OFFSET))();
		}
		*/

		/*
		static ::MoleMole::NAPInput::Attitude CGMNBICLFEI(::MoleMole::NAPInput::Attitude& PADJNMGMGHO, ::MoleMole::NAPInput::Attitude& KDEHMPGOCEP, ::Foundation::SpaceType HMPAJDGFNLH)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_CGMNBICLFEI_OFFSET))(PADJNMGMGHO, KDEHMPGOCEP, HMPAJDGFNLH);
		}
		*/

		/*
		static ::MoleMole::NAPInput::Attitude NHNKBNCHMKP(::MoleMole::NAPInput::Attitude& KDEHMPGOCEP, ::MoleMole::NAPInput::Attitude& PADJNMGMGHO, ::Foundation::SpaceType HMPAJDGFNLH)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_NHNKBNCHMKP_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, HMPAJDGFNLH);
		}
		*/

		/*
		static ::MoleMole::NAPInput::Attitude ANPBCLAFCJB(::MoleMole::NAPInput::Attitude& EHPJNLMOPAL, ::MoleMole::NAPInput::Attitude& PAHDPPPMJIK, ::Foundation::SpaceType HMPAJDGFNLH)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_ANPBCLAFCJB_OFFSET))(EHPJNLMOPAL, PAHDPPPMJIK, HMPAJDGFNLH);
		}
		*/

		/*
		static ::MoleMole::NAPInput::Attitude GDCDIIOAKLI(::MoleMole::NAPInput::Attitude& EHPJNLMOPAL, ::MoleMole::NAPInput::Attitude& PAHDPPPMJIK, ::Foundation::SpaceType HMPAJDGFNLH)
		{
			return ((::MoleMole::NAPInput::Attitude(*)(::MoleMole::NAPInput::Attitude&, ::MoleMole::NAPInput::Attitude&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_ATTITUDE_GDCDIIOAKLI_OFFSET))(EHPJNLMOPAL, PAHDPPPMJIK, HMPAJDGFNLH);
		}
		*/
	};
}
