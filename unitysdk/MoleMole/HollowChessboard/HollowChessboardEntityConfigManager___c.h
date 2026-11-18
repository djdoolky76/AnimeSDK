#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNGEILFEGAG;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C_FODPNENGGDH_OFFSET UNITYSDK_OFFSET(0x1466FF00)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1466FEB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1466FEF0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager___c_TypeDefinitionIndex = 68708;

	class HollowChessboardEntityConfigManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager___c_TypeDefinitionIndex)->GetStaticField(0x41B50);
		}
		static ::System::Action_1<::HNGEILFEGAG*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::HNGEILFEGAG*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager___c_TypeDefinitionIndex)->GetStaticField(0x41B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void FODPNENGGDH(::HNGEILFEGAG* GPOFBDLMLNJ)
		{
			return ((::System::Void(*)(::PVOID, ::HNGEILFEGAG*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C_FODPNENGGDH_OFFSET))(this, GPOFBDLMLNJ);
		}
	};
}
