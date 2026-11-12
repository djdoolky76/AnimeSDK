#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define MJNFBKKEIJL_BIADEKOAHLF_OFFSET UNITYSDK_OFFSET(0xC228FD0)
#define MJNFBKKEIJL_CTOR_OFFSET UNITYSDK_OFFSET(0xC228F70)
#define MJNFBKKEIJL_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xC229070)
#define MJNFBKKEIJL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC228F80)

inline static constexpr unsigned int MJNFBKKEIJL_TypeDefinitionIndex = 66661;

	class MJNFBKKEIJL : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + MJNFBKKEIJL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + MJNFBKKEIJL_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 BIADEKOAHLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNFBKKEIJL_BIADEKOAHLF_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNFBKKEIJL_LDKMIKEMHFO_OFFSET))(this);
		}

	};
