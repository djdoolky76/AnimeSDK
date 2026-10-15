#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Object.h"
class AFHPMNBMPNN;
class FCOEMCEDLNL;
namespace System { class String; }

#define AFHPMNBMPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC87E90)
#define AFHPMNBMPNN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC87CD0)

inline static constexpr unsigned int AFHPMNBMPNN_TypeDefinitionIndex = 12820;

	class AFHPMNBMPNN : public ::System::Object
	{
	public:
		::System::String* KILDBPGFAPG; // 0x10
		::System::UInt32 PNOPJBELEDM; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::RPG::GameCore::RhythmType FCHEGBOMJHB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHPMNBMPNN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFHPMNBMPNN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFHPMNBMPNN*))((::PBYTE)hIl2Cpp + AFHPMNBMPNN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
