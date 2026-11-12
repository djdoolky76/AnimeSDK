#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PGFBPOEHOLL;
namespace System { class String; }

#define PGFBPOEHOLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EDF10)
#define PGFBPOEHOLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4E5A30)

inline static constexpr unsigned int PGFBPOEHOLL_TypeDefinitionIndex = 14587;

	class PGFBPOEHOLL : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::System::UInt32>* ACECCFPKEHJ; // 0x18
		::System::String* KILFKBDMJGI; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::RPG::Client::TextID OENAMINOLLF; // 0x40
		::System::UInt32 HDFPMFOJCLD; // 0x50
		::System::UInt32 CANEJABOMFI; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBPOEHOLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PGFBPOEHOLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PGFBPOEHOLL*))((::PBYTE)hIl2Cpp + PGFBPOEHOLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
