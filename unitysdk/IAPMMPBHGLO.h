#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBDLKBEAHDL.h"
class CIEHGAHJDFN;
class PAKPBEKMBEA;
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAPMMPBHGLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E26100)
#define IAPMMPBHGLO_ECNKMIFCAFC_OFFSET UNITYSDK_OFFSET(0x15E26170)

	class IAPMMPBHGLO : public ::PBDLKBEAHDL
	{
	public:
		::System::Void _ctor(::PAKPBEKMBEA* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::PAKPBEKMBEA*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAPMMPBHGLO_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ECNKMIFCAFC(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::CIEHGAHJDFN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::UInt32, ::System::UInt32, ::CIEHGAHJDFN*))((::PBYTE)hIl2Cpp + IAPMMPBHGLO_ECNKMIFCAFC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
