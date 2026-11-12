#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define MMKKGCAMKCK_CTOR_OFFSET UNITYSDK_OFFSET(0xC293440)
#define MMKKGCAMKCK_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0xC293540)
#define MMKKGCAMKCK_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0xC2934A0)
#define MMKKGCAMKCK_UPDATE_OFFSET UNITYSDK_OFFSET(0xC293450)

inline static constexpr unsigned int MMKKGCAMKCK_TypeDefinitionIndex = 66660;

	class MMKKGCAMKCK : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + MMKKGCAMKCK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + MMKKGCAMKCK_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKKGCAMKCK_MHHDBKELGIO_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKKGCAMKCK_IIILLEPDBCJ_OFFSET))(this);
		}

	};
