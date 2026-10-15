#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TitanAtlasGroup; }
namespace RPG::Client { class TitanAtlasInfo; }
namespace RPG::Client { class TitanAtlasVoicePool; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBPGMFHMMJF_COJLLJDIAIK_OFFSET UNITYSDK_OFFSET(0x15E3B750)
#define IBPGMFHMMJF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3BE50)
#define IBPGMFHMMJF_GMPKHPOIMBB_OFFSET UNITYSDK_OFFSET(0x15E3B140)
#define IBPGMFHMMJF_HONPOEGJHFN_OFFSET UNITYSDK_OFFSET(0x15E3AE50)
#define IBPGMFHMMJF_LKAIBLEDGPH_OFFSET UNITYSDK_OFFSET(0x15E3BAD0)

inline static constexpr unsigned int IBPGMFHMMJF_TypeDefinitionIndex = 68140;

	class IBPGMFHMMJF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPGMFHMMJF_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasGroup*>* HONPOEGJHFN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasGroup*>*(*)())((::PBYTE)hIl2Cpp + IBPGMFHMMJF_HONPOEGJHFN_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* GMPKHPOIMBB(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IBPGMFHMMJF_GMPKHPOIMBB_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>* COJLLJDIAIK(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*))((::PBYTE)hIl2Cpp + IBPGMFHMMJF_COJLLJDIAIK_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasVoicePool*>* LKAIBLEDGPH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasVoicePool*>*(*)())((::PBYTE)hIl2Cpp + IBPGMFHMMJF_LKAIBLEDGPH_OFFSET))();
		}

	};
