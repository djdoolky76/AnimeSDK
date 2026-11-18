#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GIDCLMDGHEM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1625A8A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GIDCLMDGHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1625A890)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager_GIDCLMDGHEM_TypeDefinitionIndex = 68710;

	class HollowChessboardEntityConfigManager_GIDCLMDGHEM : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
		::System::String* GDGGMIJHAJJ; // 0x18
		::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
		::System::Single HBFKHANEEND; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GIDCLMDGHEM__CTOR_OFFSET))(this);
		}

		::System::Void PNGOHNLELDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_GIDCLMDGHEM_PNGOHNLELDJ_OFFSET))(this);
		}
	};
}
