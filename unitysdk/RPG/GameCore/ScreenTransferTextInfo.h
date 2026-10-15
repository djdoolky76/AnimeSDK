#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScreenTransferSingleTextInfo; }
namespace RPG::GameCore { class ScreenTransferTextInfo; }

#define RPG_GAMECORE_SCREENTRANSFERTEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5DD10)
#define RPG_GAMECORE_SCREENTRANSFERTEXTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5DB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferTextInfo_TypeDefinitionIndex = 20858;

	class ScreenTransferTextInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean NotAuto; // 0x10
		::System::Boolean PlayVoice; // 0x11
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::ScreenTransferSingleTextInfo*>* TextList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERTEXTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScreenTransferTextInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScreenTransferTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERTEXTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
