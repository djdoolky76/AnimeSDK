#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_JOINROOMFROMSESSIONPARAM_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x180F2A90)
#define MOLEMOLE_JOINROOMFROMSESSIONPARAM_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x180F2BD0)
#define MOLEMOLE_JOINROOMFROMSESSIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x180F2A80)

namespace MoleMole
{
	inline static constexpr unsigned int JoinRoomFromSessionParam_TypeDefinitionIndex = 81587;

	class JoinRoomFromSessionParam : public ::System::Object
	{
	public:
		::System::UInt64 roomId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JOINROOMFROMSESSIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::String* JGECEJIHMLG(::MoleMole::JoinRoomFromSessionParam* EIFONLCJOPG)
		{
			return ((::System::String*(*)(::MoleMole::JoinRoomFromSessionParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_JOINROOMFROMSESSIONPARAM_JGECEJIHMLG_OFFSET))(EIFONLCJOPG);
		}

		static ::MoleMole::JoinRoomFromSessionParam* JIDMADDMGIE(::System::String* FCCLIEJAKLI)
		{
			return ((::MoleMole::JoinRoomFromSessionParam*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_JOINROOMFROMSESSIONPARAM_JIDMADDMGIE_OFFSET))(FCCLIEJAKLI);
		}
	};
}
