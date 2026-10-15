#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define PJDOLCFHBBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC27C110)
#define PJDOLCFHBBN_GET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0xC27C230)
#define PJDOLCFHBBN_GET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0xC27C210)
#define PJDOLCFHBBN_SET_DESTROLEID_OFFSET UNITYSDK_OFFSET(0xC27C240)
#define PJDOLCFHBBN_SET_SRCROLEID_OFFSET UNITYSDK_OFFSET(0xC27C220)
#define PJDOLCFHBBN_UPDATE_OFFSET UNITYSDK_OFFSET(0xC27C140)

inline static constexpr unsigned int PJDOLCFHBBN_TypeDefinitionIndex = 65027;

	class PJDOLCFHBBN : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::UInt32 _DestRoleID_k__BackingField; // 0x28
		::System::UInt32 _SrcRoleID_k__BackingField; // 0x2C
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + PJDOLCFHBBN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + PJDOLCFHBBN_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SrcRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDOLCFHBBN_GET_SRCROLEID_OFFSET))(this);
		}

		::System::Void set_SrcRoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDOLCFHBBN_SET_SRCROLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DestRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDOLCFHBBN_GET_DESTROLEID_OFFSET))(this);
		}

		::System::Void set_DestRoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJDOLCFHBBN_SET_DESTROLEID_OFFSET))(this, a1);
		}

	};
