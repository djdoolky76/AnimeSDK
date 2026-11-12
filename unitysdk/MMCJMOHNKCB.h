#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MMCJMOHNKCB;
namespace System { class String; }

#define MMCJMOHNKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E2800)
#define MMCJMOHNKCB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3E21B0)

inline static constexpr unsigned int MMCJMOHNKCB_TypeDefinitionIndex = 15217;

	class MMCJMOHNKCB : public ::System::Object
	{
	public:
		::System::String* LCNLDGGAOBH; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
		::Il2CppArray<::System::UInt32>* JEHDKAKMCGC; // 0x20
		::System::String* BCGJNNDCIFH; // 0x28
		::System::String* OHBMLDNKGMD; // 0x30
		::System::String* DOKOMKFGOOC; // 0x38
		::RPG::Client::TextID PJNNPOKJEFD; // 0x40
		::RPG::Client::TextID NMAHGFAPENI; // 0x50
		::RPG::Client::TextID DDGDJCKKHPH; // 0x60
		::RPG::Client::TextID MJOOFPBABEA; // 0x70
		::System::Boolean GIFCDPFAKKP; // 0x80
		::System::Byte _padding0[0x3];
		::System::UInt32 JJKLIJNFIBB; // 0x84
		::RPG::Client::TextID FBOICELIKNJ; // 0x88
		::System::UInt32 PILOLAAEAHB; // 0x98
		::System::UInt32 KLOEJIMMPJM; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCJMOHNKCB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMCJMOHNKCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMCJMOHNKCB*))((::PBYTE)hIl2Cpp + MMCJMOHNKCB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
