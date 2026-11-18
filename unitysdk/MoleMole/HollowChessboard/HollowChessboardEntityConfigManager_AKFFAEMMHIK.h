#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNGEILFEGAG;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_AKFFAEMMHIK_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13595C30)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_AKFFAEMMHIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13595C20)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager_AKFFAEMMHIK_TypeDefinitionIndex = 68709;

	class HollowChessboardEntityConfigManager_AKFFAEMMHIK : public ::System::Object
	{
	public:
		::System::Action_1<::HNGEILFEGAG*>* AMHGBGMOMLL; // 0x10
		::System::Action* IBNICCGMILF; // 0x18
		::System::Int32 HBINAGPODHA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_AKFFAEMMHIK__CTOR_OFFSET))(this);
		}

		::System::Void OKKMJKOAIKG(::HNGEILFEGAG* GPOFBDLMLNJ)
		{
			return ((::System::Void(*)(::PVOID, ::HNGEILFEGAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_AKFFAEMMHIK_OKKMJKOAIKG_OFFSET))(this, GPOFBDLMLNJ);
		}
	};
}
