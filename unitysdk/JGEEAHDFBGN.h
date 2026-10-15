#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JGEEAHDFBGN;

#define JGEEAHDFBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D029170)
#define JGEEAHDFBGN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D029180)
#define JGEEAHDFBGN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D029140)

inline static constexpr unsigned int JGEEAHDFBGN_TypeDefinitionIndex = 19944;

	class JGEEAHDFBGN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID KBEPAIAFLHL; // 0x18
		::System::Boolean JFNHKEKIDKJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEEAHDFBGN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JGEEAHDFBGN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGEEAHDFBGN*))((::PBYTE)hIl2Cpp + JGEEAHDFBGN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JGEEAHDFBGN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGEEAHDFBGN*))((::PBYTE)hIl2Cpp + JGEEAHDFBGN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
