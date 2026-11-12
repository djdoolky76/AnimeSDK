#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AGPCKNGHOAH;
class FCOEMCEDLNL;
namespace System { class String; }

#define AGPCKNGHOAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6A0A0)
#define AGPCKNGHOAH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE6A0B0)
#define AGPCKNGHOAH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE6A070)

inline static constexpr unsigned int AGPCKNGHOAH_TypeDefinitionIndex = 23795;

	class AGPCKNGHOAH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OELMOCMDEJI; // 0x18
		::Il2CppArray<::System::String*>* DPBLGLBPFGK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPCKNGHOAH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AGPCKNGHOAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGPCKNGHOAH*))((::PBYTE)hIl2Cpp + AGPCKNGHOAH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AGPCKNGHOAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGPCKNGHOAH*))((::PBYTE)hIl2Cpp + AGPCKNGHOAH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
