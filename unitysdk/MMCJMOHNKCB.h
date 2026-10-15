#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MMCJMOHNKCB;
namespace System { class String; }

#define MMCJMOHNKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A22A0)
#define MMCJMOHNKCB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1A1C50)

inline static constexpr unsigned int MMCJMOHNKCB_TypeDefinitionIndex = 15061;

	class MMCJMOHNKCB : public ::System::Object
	{
	public:
		::System::String* LCNLDGGAOBH; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
		::System::String* DOKOMKFGOOC; // 0x20
		::Il2CppArray<::System::UInt32>* JEHDKAKMCGC; // 0x28
		::System::String* OHBMLDNKGMD; // 0x30
		::System::String* BCGJNNDCIFH; // 0x38
		::System::UInt32 JJKLIJNFIBB; // 0x40
		::System::UInt32 KLOEJIMMPJM; // 0x44
		::RPG::Client::TextID PJNNPOKJEFD; // 0x48
		::RPG::Client::TextID NMAHGFAPENI; // 0x58
		::RPG::Client::TextID MJOOFPBABEA; // 0x68
		::System::UInt32 PILOLAAEAHB; // 0x78
		::System::Boolean GIFCDPFAKKP; // 0x7C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID DDGDJCKKHPH; // 0x80
		::RPG::Client::TextID FBOICELIKNJ; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCJMOHNKCB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMCJMOHNKCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMCJMOHNKCB*))((::PBYTE)hIl2Cpp + MMCJMOHNKCB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
