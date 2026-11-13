#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OLBEPOHNEPC;
namespace System { class String; }

#define OLBEPOHNEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0F9B0)
#define OLBEPOHNEPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA0F9E0)
#define OLBEPOHNEPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA0F950)

inline static constexpr unsigned int OLBEPOHNEPC_TypeDefinitionIndex = 21216;

	class OLBEPOHNEPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DACJLKFGKBC; // 0x18
		::System::String* NPFOAIGHHJB; // 0x20
		::System::String* IJHMIFMBKAI; // 0x28
		::System::String* NLBAGBJGHMH; // 0x30
		::System::Single EPKNMGMCCCB; // 0x38
		::System::Single MGMKBKFGPIH; // 0x3C
		::System::UInt32 JMDAGIAEMBB; // 0x40
		::System::Boolean ECBCEHKNNJN; // 0x44
		::System::Boolean FFDBJJFAPOD; // 0x45
		::System::Boolean KOECAJEKEIB; // 0x46
		::System::Boolean CLANKALDLOP; // 0x47
		::System::UInt32 BDNMINKICFK; // 0x48
		::System::Single ALEIEMPBHOM; // 0x4C
		::System::UInt32 MJHLOMMCIIJ; // 0x50
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
