#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NAEPPBHCFII;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define NAEPPBHCFII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FA5A0)
#define NAEPPBHCFII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3FA0A0)

inline static constexpr unsigned int NAEPPBHCFII_TypeDefinitionIndex = 15223;

	class NAEPPBHCFII : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::String* OMKFHNLHBBB; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* OICGFNGNLOE; // 0x28
		::System::UInt32 DBALOLNOLGL; // 0x30
		::System::UInt32 PHFMCACHFIJ; // 0x34
		::RPG::Client::TextID NMAHGFAPENI; // 0x38
		::RPG::Client::TextID HGHFCLHKJNJ; // 0x48
		::System::UInt32 AAGKEBFHLMC; // 0x58
		::System::UInt32 DPCMGDIIAKN; // 0x5C
		::RPG::Client::TextID MOEDOCHOCPJ; // 0x60
		::RPG::Client::TextID MJOOFPBABEA; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEPPBHCFII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NAEPPBHCFII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NAEPPBHCFII*))((::PBYTE)hIl2Cpp + NAEPPBHCFII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
