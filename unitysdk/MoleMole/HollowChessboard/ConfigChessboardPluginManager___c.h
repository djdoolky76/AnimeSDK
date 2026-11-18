#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCFODKNNLB;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C_LFLODPCJPOE_OFFSET UNITYSDK_OFFSET(0x162D0FE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162D0F90)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162D0FD0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager___c_TypeDefinitionIndex = 62586;

	class ConfigChessboardPluginManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager___c_TypeDefinitionIndex)->GetStaticField(0x46CB0);
		}
		static ::System::Action_1<::LLCFODKNNLB*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::LLCFODKNNLB*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager___c_TypeDefinitionIndex)->GetStaticField(0x46CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void LFLODPCJPOE(::LLCFODKNNLB* CIMFKACAGNI)
		{
			return ((::System::Void(*)(::PVOID, ::LLCFODKNNLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C_LFLODPCJPOE_OFFSET))(this, CIMFKACAGNI);
		}
	};
}
