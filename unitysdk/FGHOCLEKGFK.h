#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define FGHOCLEKGFK_ALCIHKHPMLJ_OFFSET UNITYSDK_OFFSET(0x15762DF0)
#define FGHOCLEKGFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15762D40)
#define FGHOCLEKGFK_PGJHDJALJOJ_OFFSET UNITYSDK_OFFSET(0x15762D50)

	class FGHOCLEKGFK : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + FGHOCLEKGFK_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* PGJHDJALJOJ()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHOCLEKGFK_PGJHDJALJOJ_OFFSET))(this);
		}

		::System::UInt32 ALCIHKHPMLJ(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGHOCLEKGFK_ALCIHKHPMLJ_OFFSET))(this, a1);
		}

	};
