#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define IEKCPJDNBBA_CTOR_OFFSET UNITYSDK_OFFSET(0x16E6C7E0)
#define IEKCPJDNBBA_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0x16E6CAC0)
#define IEKCPJDNBBA_KIABKDHANGN_OFFSET UNITYSDK_OFFSET(0x16E6C840)
#define IEKCPJDNBBA_PLGMGJFBIBF_OFFSET UNITYSDK_OFFSET(0x16E6CA20)
#define IEKCPJDNBBA_UPDATE_OFFSET UNITYSDK_OFFSET(0x16E6C7F0)

inline static constexpr unsigned int IEKCPJDNBBA_TypeDefinitionIndex = 66616;

	class IEKCPJDNBBA : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IEKCPJDNBBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IEKCPJDNBBA_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 KIABKDHANGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCPJDNBBA_KIABKDHANGN_OFFSET))(this);
		}

		::System::UInt32 PLGMGJFBIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCPJDNBBA_PLGMGJFBIBF_OFFSET))(this);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKCPJDNBBA_ILFCOLOIBEM_OFFSET))(this);
		}

	};
