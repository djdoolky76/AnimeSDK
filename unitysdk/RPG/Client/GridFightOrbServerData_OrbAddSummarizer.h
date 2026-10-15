#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class MMEDLCAENAL;
class PFBCBNMKFAK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD1CC490)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD1CBF40)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xD1CC3E0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xD1CBFA0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBADDSUMMARIZER_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0xD1CC1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_OrbAddSummarizer_TypeDefinitionIndex = 64445;

	class GridFightOrbServerData_OrbAddSummarizer : public ::AMCOEFHHBPO
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
