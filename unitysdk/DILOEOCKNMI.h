#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightTrailblazeEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DILOEOCKNMI_CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9040)
#define DILOEOCKNMI_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x18EC9050)
#define DILOEOCKNMI_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x18EC9330)

inline static constexpr unsigned int DILOEOCKNMI_TypeDefinitionIndex = 67291;

	class DILOEOCKNMI : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightTrailblazeEffect* LBNBPMIFDHI; // 0x10
		// static const ::System::Object BJJFMAINDIB; // 0x0
		::System::Void _ctor(::RPG::Client::GridFightTrailblazeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrailblazeEffect*))((::PBYTE)hIl2Cpp + DILOEOCKNMI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DILOEOCKNMI_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + DILOEOCKNMI_UPDATEADDROLE_OFFSET))(this, a1);
		}

	};
