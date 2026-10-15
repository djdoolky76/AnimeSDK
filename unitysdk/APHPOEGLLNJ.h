#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class APHPOEGLLNJ;
class FCOEMCEDLNL;

#define APHPOEGLLNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCED940)
#define APHPOEGLLNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCED550)

inline static constexpr unsigned int APHPOEGLLNJ_TypeDefinitionIndex = 11485;

	class APHPOEGLLNJ : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PGLIPCKDFNB; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* JGBCKHKPPCA; // 0x18
		::Il2CppArray<::System::UInt32>* LMPLLJFMFEC; // 0x20
		::System::UInt32 DJHMIDECBMH; // 0x28
		::System::UInt32 FAEHFMIFPBG; // 0x2C
		::RPG::Client::TextID IJEJGCEAFAF; // 0x30
		::RPG::Client::TextID DEIGIJJFOAK; // 0x40
		::System::Single LJOJGIPPJFG; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MCPJKENJILA; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHPOEGLLNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::APHPOEGLLNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APHPOEGLLNJ*))((::PBYTE)hIl2Cpp + APHPOEGLLNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
