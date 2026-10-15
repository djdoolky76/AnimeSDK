#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NAEPPBHCFII;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define NAEPPBHCFII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B8BF0)
#define NAEPPBHCFII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1B86F0)

inline static constexpr unsigned int NAEPPBHCFII_TypeDefinitionIndex = 15067;

	class NAEPPBHCFII : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* OICGFNGNLOE; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::String* OMKFHNLHBBB; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x28
		::RPG::Client::TextID MOEDOCHOCPJ; // 0x30
		::RPG::Client::TextID NMAHGFAPENI; // 0x40
		::System::UInt32 PHFMCACHFIJ; // 0x50
		::System::UInt32 AAGKEBFHLMC; // 0x54
		::RPG::Client::TextID HGHFCLHKJNJ; // 0x58
		::System::UInt32 DBALOLNOLGL; // 0x68
		::System::UInt32 DPCMGDIIAKN; // 0x6C
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
