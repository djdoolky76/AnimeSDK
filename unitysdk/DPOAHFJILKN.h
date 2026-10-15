#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Action; }
namespace System { class Object; }

#define DPOAHFJILKN_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1265A740)
#define DPOAHFJILKN_BALEKJINMJL_OFFSET UNITYSDK_OFFSET(0x1265ACE0)
#define DPOAHFJILKN_BIPENBBHNAL_OFFSET UNITYSDK_OFFSET(0x1265ABA0)
#define DPOAHFJILKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1265A800)
#define DPOAHFJILKN_DGMGMDHPAOC_OFFSET UNITYSDK_OFFSET(0x1265AC40)
#define DPOAHFJILKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1265A980)
#define DPOAHFJILKN_FCOOLBDAHPK_OFFSET UNITYSDK_OFFSET(0x1265AA60)
#define DPOAHFJILKN_FHOLDMAHGCL_OFFSET UNITYSDK_OFFSET(0x1265AA00)
#define DPOAHFJILKN_JCKJPGLFAHO_OFFSET UNITYSDK_OFFSET(0x1265A690)
#define DPOAHFJILKN_OCHGACEJDGH_OFFSET UNITYSDK_OFFSET(0x1265AB00)
#define DPOAHFJILKN_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1265A7A0)

inline static constexpr unsigned int DPOAHFJILKN_TypeDefinitionIndex = 60106;

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
