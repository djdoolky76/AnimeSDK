#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AIKCHOLLELG;
class FCOEMCEDLNL;

#define AIKCHOLLELG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9BA70)
#define AIKCHOLLELG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC9B840)

inline static constexpr unsigned int AIKCHOLLELG_TypeDefinitionIndex = 10982;

	class AIKCHOLLELG : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* LDCCBCIIIEC; // 0x10
		::Il2CppArray<::System::UInt32>* EJDNMAFLACG; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MJOOFPBABEA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKCHOLLELG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AIKCHOLLELG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AIKCHOLLELG*))((::PBYTE)hIl2Cpp + AIKCHOLLELG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
