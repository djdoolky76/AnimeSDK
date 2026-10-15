#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JFJOPDOIKKC;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define JFJOPDOIKKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF9370)
#define JFJOPDOIKKC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CFF9380)
#define JFJOPDOIKKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFF9340)

inline static constexpr unsigned int JFJOPDOIKKC_TypeDefinitionIndex = 24222;

	class JFJOPDOIKKC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x20
		::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJOPDOIKKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFJOPDOIKKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFJOPDOIKKC*))((::PBYTE)hIl2Cpp + JFJOPDOIKKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JFJOPDOIKKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFJOPDOIKKC*))((::PBYTE)hIl2Cpp + JFJOPDOIKKC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
