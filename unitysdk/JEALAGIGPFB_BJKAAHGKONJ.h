#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define JEALAGIGPFB_BJKAAHGKONJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16614810)
#define JEALAGIGPFB_BJKAAHGKONJ_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x16614C70)
#define JEALAGIGPFB_BJKAAHGKONJ_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x16614C90)
#define JEALAGIGPFB_BJKAAHGKONJ_SET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x16614C80)
#define JEALAGIGPFB_BJKAAHGKONJ_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x16614CA0)

	class JEALAGIGPFB_BJKAAHGKONJ : public ::System::Object
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::RPG::GameCore::GameEntity* _OwnerRef_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_BJKAAHGKONJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_BJKAAHGKONJ_GET_OWNERREF_OFFSET))(this);
		}

		::System::Void set_OwnerRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_BJKAAHGKONJ_SET_OWNERREF_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_BJKAAHGKONJ_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_BJKAAHGKONJ_SET_UNIQUENAME_OFFSET))(this, a1);
		}

	};
