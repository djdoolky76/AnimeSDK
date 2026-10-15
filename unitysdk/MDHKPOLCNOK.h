#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDHKPOLCNOK;
namespace System { class String; }

#define MDHKPOLCNOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D11B3F0)
#define MDHKPOLCNOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D11B400)
#define MDHKPOLCNOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D11B3B0)

inline static constexpr unsigned int MDHKPOLCNOK_TypeDefinitionIndex = 21954;

	class MDHKPOLCNOK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* JNFIMJCGHHG; // 0x18
		::System::String* HACNFPHPJJI; // 0x20
		::System::UInt32 LGNNJDNJPJA; // 0x28
		::System::Single DONJLCGKLMB; // 0x2C
		::System::UInt32 DLCKGFJLONK; // 0x30
		::System::UInt32 DFEJABODPGM; // 0x34
		::System::Boolean LIACIODABKH; // 0x38
		::System::Boolean MIHCGIAMIGE; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHKPOLCNOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDHKPOLCNOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + MDHKPOLCNOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDHKPOLCNOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + MDHKPOLCNOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
