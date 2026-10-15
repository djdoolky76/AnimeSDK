#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MMCJMOHNKCB;
namespace System { class String; }

#define MMCJMOHNKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CFFF0)
#define MMCJMOHNKCB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CF9A0)

inline static constexpr unsigned int MMCJMOHNKCB_TypeDefinitionIndex = 15061;

	class MMCJMOHNKCB : public ::System::Object
	{
	public:
		::System::String* BCGJNNDCIFH; // 0x10
		::System::String* DOKOMKFGOOC; // 0x18
		::System::String* OHBMLDNKGMD; // 0x20
		::System::String* LCNLDGGAOBH; // 0x28
		::Il2CppArray<::System::UInt32>* JEHDKAKMCGC; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x38
		::RPG::Client::TextID DDGDJCKKHPH; // 0x40
		::RPG::Client::TextID MJOOFPBABEA; // 0x50
		::System::UInt32 KLOEJIMMPJM; // 0x60
		::System::UInt32 JJKLIJNFIBB; // 0x64
		::RPG::Client::TextID PJNNPOKJEFD; // 0x68
		::RPG::Client::TextID NMAHGFAPENI; // 0x78
		::RPG::Client::TextID FBOICELIKNJ; // 0x88
		::System::UInt32 PILOLAAEAHB; // 0x98
		::System::Boolean GIFCDPFAKKP; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCJMOHNKCB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMCJMOHNKCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMCJMOHNKCB*))((::PBYTE)hIl2Cpp + MMCJMOHNKCB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
