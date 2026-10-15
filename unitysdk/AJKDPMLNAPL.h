#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageParamEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJKDPMLNAPL_BKOGFMNILFG_OFFSET UNITYSDK_OFFSET(0x12CBD0E0)
#define AJKDPMLNAPL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBD2E0)

inline static constexpr unsigned int AJKDPMLNAPL_TypeDefinitionIndex = 56320;

	class AJKDPMLNAPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* EJHODPJIFIN; // 0x10
		::System::String* OENAMINOLLF; // 0x18
		::System::Int32 IKNFGMJEDOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKDPMLNAPL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>* BKOGFMNILFG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKDPMLNAPL_BKOGFMNILFG_OFFSET))(this);
		}

	};
