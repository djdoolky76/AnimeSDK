#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Action; }
namespace System { class Object; }

#define DPOAHFJILKN_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x181B4940)
#define DPOAHFJILKN_BALEKJINMJL_OFFSET UNITYSDK_OFFSET(0x181B4EE0)
#define DPOAHFJILKN_BIPENBBHNAL_OFFSET UNITYSDK_OFFSET(0x181B4DA0)
#define DPOAHFJILKN_CTOR_OFFSET UNITYSDK_OFFSET(0x181B4A00)
#define DPOAHFJILKN_DGMGMDHPAOC_OFFSET UNITYSDK_OFFSET(0x181B4E40)
#define DPOAHFJILKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181B4B80)
#define DPOAHFJILKN_FCOOLBDAHPK_OFFSET UNITYSDK_OFFSET(0x181B4C60)
#define DPOAHFJILKN_FHOLDMAHGCL_OFFSET UNITYSDK_OFFSET(0x181B4C00)
#define DPOAHFJILKN_JCKJPGLFAHO_OFFSET UNITYSDK_OFFSET(0x181B4890)
#define DPOAHFJILKN_OCHGACEJDGH_OFFSET UNITYSDK_OFFSET(0x181B4D00)
#define DPOAHFJILKN_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x181B49A0)

inline static constexpr unsigned int DPOAHFJILKN_TypeDefinitionIndex = 61390;

	class DPOAHFJILKN : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::Action* OnMaybeChanged; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JCKJPGLFAHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAHFJILKN_JCKJPGLFAHO_OFFSET))(this);
		}

		::System::Void add_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAHFJILKN_DISPOSE_OFFSET))(this);
		}

		::System::Void FHOLDMAHGCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAHFJILKN_FHOLDMAHGCL_OFFSET))(this);
		}

		::System::Void FCOOLBDAHPK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_FCOOLBDAHPK_OFFSET))(this, a1);
		}

		::System::Void OCHGACEJDGH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_OCHGACEJDGH_OFFSET))(this, a1);
		}

		::System::Void BIPENBBHNAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_BIPENBBHNAL_OFFSET))(this, a1);
		}

		::System::Void DGMGMDHPAOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_DGMGMDHPAOC_OFFSET))(this, a1);
		}

		::System::Void BALEKJINMJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOAHFJILKN_BALEKJINMJL_OFFSET))(this, a1);
		}

	};
