#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNCHGCMKAKE;
namespace RPG::Client { class ArchiveData; }

#define NJFOPFLLELH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC099F0)
#define NJFOPFLLELH_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0xBC09B30)
#define NJFOPFLLELH_GPCHGILIMNO_OFFSET UNITYSDK_OFFSET(0xBC09A00)
#define NJFOPFLLELH_SET_ISDONE_OFFSET UNITYSDK_OFFSET(0xBC09B40)

inline static constexpr unsigned int NJFOPFLLELH_TypeDefinitionIndex = 62422;

	class NJFOPFLLELH : public ::System::Object
	{
	public:
		::HNCHGCMKAKE* OHNLDHKAMEE; // 0x10
		::System::Boolean _IsDone_k__BackingField; // 0x18
		::System::Void _ctor(::HNCHGCMKAKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNCHGCMKAKE*))((::PBYTE)hIl2Cpp + NJFOPFLLELH_CTOR_OFFSET))(this, a1);
		}

		::System::Void GPCHGILIMNO(::RPG::Client::ArchiveData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ArchiveData*))((::PBYTE)hIl2Cpp + NJFOPFLLELH_GPCHGILIMNO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFOPFLLELH_GET_ISDONE_OFFSET))(this);
		}

		::System::Void set_IsDone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJFOPFLLELH_SET_ISDONE_OFFSET))(this, a1);
		}

	};
