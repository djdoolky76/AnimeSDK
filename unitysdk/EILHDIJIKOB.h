#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace RPG::Client { class GridFightRoleConfig; }

#define EILHDIJIKOB_CTOR_OFFSET UNITYSDK_OFFSET(0x154C3C00)
#define EILHDIJIKOB_DADJDFMJBNL_OFFSET UNITYSDK_OFFSET(0x154C3C60)
#define EILHDIJIKOB_DCAPOEODPJH_OFFSET UNITYSDK_OFFSET(0x154C3DD0)
#define EILHDIJIKOB_UPDATE_OFFSET UNITYSDK_OFFSET(0x154C3C10)

inline static constexpr unsigned int EILHDIJIKOB_TypeDefinitionIndex = 65030;

	class EILHDIJIKOB : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EILHDIJIKOB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EILHDIJIKOB_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean DADJDFMJBNL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EILHDIJIKOB_DADJDFMJBNL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRoleConfig* DCAPOEODPJH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EILHDIJIKOB_DCAPOEODPJH_OFFSET))(this, a1, a2);
		}

	};
