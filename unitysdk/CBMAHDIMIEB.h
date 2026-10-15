#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class GEDMHFPPBHN;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }

#define CBMAHDIMIEB_JOOGBPOEDKC_OFFSET UNITYSDK_OFFSET(0xC4AF8F0)
#define CBMAHDIMIEB_MBICHOHBCPD_1_OFFSET UNITYSDK_OFFSET(0xC4AF840)
#define CBMAHDIMIEB_MBICHOHBCPD_OFFSET UNITYSDK_OFFSET(0xC4AF7D0)

inline static constexpr unsigned int CBMAHDIMIEB_TypeDefinitionIndex = 71228;

	class CBMAHDIMIEB : public ::System::Object
	{
	public:
		static ::System::Boolean MBICHOHBCPD(::GEDMHFPPBHN* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::System::Boolean(*)(::GEDMHFPPBHN*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CBMAHDIMIEB_MBICHOHBCPD_OFFSET))(a1, a2);
		}

		static ::System::Boolean MBICHOHBCPD_1(::GEDMHFPPBHN* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Boolean(*)(::GEDMHFPPBHN*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + CBMAHDIMIEB_MBICHOHBCPD_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ActionDelayChangeReason JOOGBPOEDKC(::RPG::GameCore::ActionDelayPreshowConfig* a1)
		{
			return ((::RPG::GameCore::ActionDelayChangeReason(*)(::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CBMAHDIMIEB_JOOGBPOEDKC_OFFSET))(a1);
		}

	};
