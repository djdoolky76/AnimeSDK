#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GGLPKOIOBFP;

#define GGLPKOIOBFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE42D10)
#define GGLPKOIOBFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE42B90)

inline static constexpr unsigned int GGLPKOIOBFP_TypeDefinitionIndex = 14436;

	class GGLPKOIOBFP : public ::System::Object
	{
	public:
		::RPG::Client::TextID KEGANNHEKHA; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLPKOIOBFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GGLPKOIOBFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGLPKOIOBFP*))((::PBYTE)hIl2Cpp + GGLPKOIOBFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
