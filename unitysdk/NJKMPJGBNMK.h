#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NJKMPJGBNMK;
namespace RPG::GameCore { class DynamicString; }

#define NJKMPJGBNMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D217ED0)
#define NJKMPJGBNMK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D217EE0)
#define NJKMPJGBNMK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D217EA0)

	class NJKMPJGBNMK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x18
		::System::Single JBBMBCMJBJM; // 0x20
		::RPG::GameCore::FiveDimCameraFollowClampMask HAPJILPJJGB; // 0x24
		::System::Boolean HOPHHGMFDHD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKMPJGBNMK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJKMPJGBNMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJKMPJGBNMK*))((::PBYTE)hIl2Cpp + NJKMPJGBNMK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NJKMPJGBNMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJKMPJGBNMK*))((::PBYTE)hIl2Cpp + NJKMPJGBNMK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
