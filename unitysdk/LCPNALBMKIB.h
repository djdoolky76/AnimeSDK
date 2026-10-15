#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMPLIFIKJGC;
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCPNALBMKIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB61B0C0)
#define LCPNALBMKIB_DANKHPIIDOH_OFFSET UNITYSDK_OFFSET(0xB61B330)
#define LCPNALBMKIB_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0xB61B160)

inline static constexpr unsigned int LCPNALBMKIB_TypeDefinitionIndex = 66171;

	class LCPNALBMKIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GMPLIFIKJGC*>* ACBJKDENILN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPNALBMKIB_CTOR_OFFSET))(this);
		}

		::System::Void HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + LCPNALBMKIB_HDILBJHMBMF_OFFSET))(this, a1);
		}

		::System::Void DANKHPIIDOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPNALBMKIB_DANKHPIIDOH_OFFSET))(this);
		}

	};
