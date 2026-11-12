#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CMAEOIMLFLK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CMAEOIMLFLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EECEB90)
#define CMAEOIMLFLK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EECEBA0)
#define CMAEOIMLFLK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EECEB60)

inline static constexpr unsigned int CMAEOIMLFLK_TypeDefinitionIndex = 22935;

	class CMAEOIMLFLK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FPLOPAPAONB; // 0x18
		::RPG::GameCore::DynamicFloat* KOKHFHJCGBJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMAEOIMLFLK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMAEOIMLFLK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMAEOIMLFLK*))((::PBYTE)hIl2Cpp + CMAEOIMLFLK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CMAEOIMLFLK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMAEOIMLFLK*))((::PBYTE)hIl2Cpp + CMAEOIMLFLK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
