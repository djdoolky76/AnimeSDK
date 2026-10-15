#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BindTimeRewindMultiControlType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGEEPDAIFGO_CLEAR_OFFSET UNITYSDK_OFFSET(0x13A65890)
#define EGEEPDAIFGO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A65910)
#define EGEEPDAIFGO_GPEHBFDFLHB_OFFSET UNITYSDK_OFFSET(0x13A64EC0)
#define EGEEPDAIFGO_HPILNIEIPJI_OFFSET UNITYSDK_OFFSET(0x13A65080)
#define EGEEPDAIFGO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A64D70)

	class EGEEPDAIFGO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KBINOPCHKJC; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityTimeRewindComponent*>* KGDLDFAHHMI; // 0x18
		::System::Object* OMHNKKKKNID; // 0x20
		::RPG::GameCore::EntityTimeRewindComponent* FNKOAJJKJNC; // 0x28
		::RPG::GameCore::BindTimeRewindMultiControlType GKEBDIGBODK; // 0x30
		::System::Int32 NMFFGLHFDDE; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEEPDAIFGO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::EntityTimeRewindComponent* a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::BindTimeRewindMultiControlType a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::BindTimeRewindMultiControlType, ::System::Object*))((::PBYTE)hIl2Cpp + EGEEPDAIFGO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GPEHBFDFLHB(::RPG::GameCore::EntityTimeRewindComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGEEPDAIFGO_GPEHBFDFLHB_OFFSET))(this, a1, a2);
		}

		::System::Void HPILNIEIPJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEEPDAIFGO_HPILNIEIPJI_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEEPDAIFGO_CLEAR_OFFSET))(this);
		}

	};
