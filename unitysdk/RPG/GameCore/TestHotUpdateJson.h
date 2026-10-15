#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TestHotUpdateJson; }
namespace System { class String; }

#define RPG_GAMECORE_TESTHOTUPDATEJSON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB81070)
#define RPG_GAMECORE_TESTHOTUPDATEJSON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB80F10)

namespace RPG::GameCore
{
	class TestHotUpdateJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* IntIdList; // 0x10
		::Il2CppArray<::System::String*>* StringInfoList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEJSON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TestHotUpdateJson* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TestHotUpdateJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TESTHOTUPDATEJSON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
