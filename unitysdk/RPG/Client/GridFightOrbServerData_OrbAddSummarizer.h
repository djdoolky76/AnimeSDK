#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class MMEDLCAENAL;
class PFBCBNMKFAK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF14FA0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1DF149E0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1DF14EF0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x1DF14AB0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0x1DF14CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_OrbAddSummarizer_TypeDefinitionIndex = 65911;

	class GridFightOrbServerData_OrbAddSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* Presents; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* Orbs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdatePresent(::PFBCBNMKFAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEPRESENT_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}
