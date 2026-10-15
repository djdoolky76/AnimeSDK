#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GIFBHKAGPEG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define GIFBHKAGPEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4F1C0)
#define GIFBHKAGPEG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE4F1D0)
#define GIFBHKAGPEG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE4F190)

inline static constexpr unsigned int GIFBHKAGPEG_TypeDefinitionIndex = 22839;

	class GIFBHKAGPEG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::String* JOPHFALPMEH; // 0x28
		::System::Boolean NMMJBGFDNAI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFBHKAGPEG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GIFBHKAGPEG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GIFBHKAGPEG*))((::PBYTE)hIl2Cpp + GIFBHKAGPEG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GIFBHKAGPEG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GIFBHKAGPEG*))((::PBYTE)hIl2Cpp + GIFBHKAGPEG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
