#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OLBEPOHNEPC;
namespace System { class String; }

#define OLBEPOHNEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49DC50)
#define OLBEPOHNEPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E49DC70)
#define OLBEPOHNEPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E49DC00)

inline static constexpr unsigned int OLBEPOHNEPC_TypeDefinitionIndex = 21216;

	class OLBEPOHNEPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NPFOAIGHHJB; // 0x18
		::System::String* IJHMIFMBKAI; // 0x20
		::System::String* NLBAGBJGHMH; // 0x28
		::System::String* DACJLKFGKBC; // 0x30
		::System::Boolean ECBCEHKNNJN; // 0x38
		::System::Boolean KOECAJEKEIB; // 0x39
		::System::Boolean FFDBJJFAPOD; // 0x3A
		::System::Boolean CLANKALDLOP; // 0x3B
		::System::UInt32 BDNMINKICFK; // 0x3C
		::System::Single MGMKBKFGPIH; // 0x40
		::System::Single ALEIEMPBHOM; // 0x44
		::System::Single EPKNMGMCCCB; // 0x48
		::System::UInt32 MJHLOMMCIIJ; // 0x4C
		::System::UInt32 JMDAGIAEMBB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBEPOHNEPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OLBEPOHNEPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLBEPOHNEPC*))((::PBYTE)hIl2Cpp + OLBEPOHNEPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OLBEPOHNEPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OLBEPOHNEPC*))((::PBYTE)hIl2Cpp + OLBEPOHNEPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
