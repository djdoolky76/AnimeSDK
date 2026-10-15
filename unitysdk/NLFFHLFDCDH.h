#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RIStateSetReason.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLFFHLFDCDH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C941610)
#define NLFFHLFDCDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C941AF0)
#define NLFFHLFDCDH_DJGPCNFPPOA_OFFSET UNITYSDK_OFFSET(0x1C941800)
#define NLFFHLFDCDH_KPGLLKILGDE_OFFSET UNITYSDK_OFFSET(0x1C941970)
#define NLFFHLFDCDH_NKJJLMFDPHA_OFFSET UNITYSDK_OFFSET(0x1C941670)
#define NLFFHLFDCDH_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C941460)
#define NLFFHLFDCDH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9415D0)

inline static constexpr unsigned int NLFFHLFDCDH_TypeDefinitionIndex = 43307;

	class NLFFHLFDCDH : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason>* KOAMMIGEDJI; // 0x10
		::RPG::GameCore::FiveDimRIStateEmissionAction* GHAIGFIPPDG; // 0x18
		::System::Single OHEPCONLDEC; // 0x20
		::System::Boolean OBMFBLPEMPI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_CLEAR_OFFSET))(this);
		}

		::System::Boolean NKJJLMFDPHA(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_NKJJLMFDPHA_OFFSET))(this, a1, a2);
		}

		::System::Boolean DJGPCNFPPOA(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_DJGPCNFPPOA_OFFSET))(this, a1, a2);
		}

		::System::Void KPGLLKILGDE(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NLFFHLFDCDH_KPGLLKILGDE_OFFSET))(this, a1);
		}

	};
