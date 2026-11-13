#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class APOGNPMEHDK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define APOGNPMEHDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECBC6A0)
#define APOGNPMEHDK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECBC700)
#define APOGNPMEHDK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECBC620)

inline static constexpr unsigned int APOGNPMEHDK_TypeDefinitionIndex = 10198;

	class APOGNPMEHDK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* BCBNHCLDDFH; // 0x18
		::System::String* NNODOGJBAJM; // 0x20
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x28
		::Il2CppArray<::System::String*>* NLDPAJFCHIL; // 0x30
		::System::String* AEIGKENAOJO; // 0x38
		::System::String* GCENKLGDENI; // 0x40
		::System::String* NGLHBNHGFOF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOGNPMEHDK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::APOGNPMEHDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APOGNPMEHDK*))((::PBYTE)hIl2Cpp + APOGNPMEHDK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::APOGNPMEHDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APOGNPMEHDK*))((::PBYTE)hIl2Cpp + APOGNPMEHDK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
