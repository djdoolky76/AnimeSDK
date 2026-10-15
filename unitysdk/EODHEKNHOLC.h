#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsContentType.h"
#include "unitysdk/System/Object.h"
class EODHEKNHOLC;
class FCOEMCEDLNL;
namespace System { class String; }

#define EODHEKNHOLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB2BF0)
#define EODHEKNHOLC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB2950)

inline static constexpr unsigned int EODHEKNHOLC_TypeDefinitionIndex = 13934;

	class EODHEKNHOLC : public ::System::Object
	{
	public:
		::System::String* EEIEODMEMFI; // 0x10
		::System::String* ODLDEEANNCM; // 0x18
		::RPG::GameCore::LimaoNewsContentType MMNJODIJPOE; // 0x20
		::System::UInt32 DGLJLJEHNNB; // 0x24
		::System::UInt32 DFFLADLLADD; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ANECPHCPLPP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODHEKNHOLC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EODHEKNHOLC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EODHEKNHOLC*))((::PBYTE)hIl2Cpp + EODHEKNHOLC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
