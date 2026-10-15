#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNNEBLLJHPC.h"
#include "unitysdk/System/Object.h"
class FOMHINEDOIA;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOANFGCEPDB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x155AD470)
#define EOANFGCEPDB_CTOR_OFFSET UNITYSDK_OFFSET(0x155AD5C0)
#define EOANFGCEPDB_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x155AD450)
#define EOANFGCEPDB_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x155AD460)

inline static constexpr unsigned int EOANFGCEPDB_TypeDefinitionIndex = 62743;

	class EOANFGCEPDB : public ::System::Object
	{
	public:
		::FOMHINEDOIA* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::LNNEBLLJHPC, ::RPG::AvatarSystem::AvatarServant*>* PMOBKALDENA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOANFGCEPDB_CTOR_OFFSET))(this);
		}

		::FOMHINEDOIA* get_Factory()
		{
			return ((::FOMHINEDOIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOANFGCEPDB_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::FOMHINEDOIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMHINEDOIA*))((::PBYTE)hIl2Cpp + EOANFGCEPDB_SET_FACTORY_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarServant* ACMKLFOMPFC(::LNNEBLLJHPC a1)
		{
			return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::LNNEBLLJHPC))((::PBYTE)hIl2Cpp + EOANFGCEPDB_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
