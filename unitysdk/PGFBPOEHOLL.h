#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PGFBPOEHOLL;
namespace System { class String; }

#define PGFBPOEHOLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E1940)
#define PGFBPOEHOLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D9610)

inline static constexpr unsigned int PGFBPOEHOLL_TypeDefinitionIndex = 14432;

	class PGFBPOEHOLL : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::System::UInt32>* ACECCFPKEHJ; // 0x18
		::System::String* KILFKBDMJGI; // 0x20
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::UInt32 CANEJABOMFI; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x3C
		::System::UInt32 HDFPMFOJCLD; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBPOEHOLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PGFBPOEHOLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PGFBPOEHOLL*))((::PBYTE)hIl2Cpp + PGFBPOEHOLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
