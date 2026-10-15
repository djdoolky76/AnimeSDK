#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEIFDGHFMMF_CTOR_OFFSET UNITYSDK_OFFSET(0x159D99E0)
#define GEIFDGHFMMF_ILBBLLKHJGK_OFFSET UNITYSDK_OFFSET(0x159D9D40)
#define GEIFDGHFMMF_ILFCOLOIBEM_OFFSET UNITYSDK_OFFSET(0x159D9E80)
#define GEIFDGHFMMF_KIABKDHANGN_OFFSET UNITYSDK_OFFSET(0x159D9DE0)
#define GEIFDGHFMMF_MPFCFKOGPEA_OFFSET UNITYSDK_OFFSET(0x159D9C30)
#define GEIFDGHFMMF_OHCHFGDIEFN_OFFSET UNITYSDK_OFFSET(0x159D9A40)
#define GEIFDGHFMMF_UPDATE_OFFSET UNITYSDK_OFFSET(0x159D99F0)

	class GEIFDGHFMMF : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* OHCHFGDIEFN()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_OHCHFGDIEFN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* MPFCFKOGPEA()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_MPFCFKOGPEA_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* ILBBLLKHJGK()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_ILBBLLKHJGK_OFFSET))(this);
		}

		::System::UInt32 KIABKDHANGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_KIABKDHANGN_OFFSET))(this);
		}

		::System::UInt32 ILFCOLOIBEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIFDGHFMMF_ILFCOLOIBEM_OFFSET))(this);
		}

	};
