#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueRoomAttributeCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KCALGNOKBJH;
namespace System { class String; }

#define KCALGNOKBJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0373A0)
#define KCALGNOKBJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0370D0)

inline static constexpr unsigned int KCALGNOKBJH_TypeDefinitionIndex = 15059;

	class KCALGNOKBJH : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
		::RPG::Client::TextID NMAHGFAPENI; // 0x20
		::RPG::Client::TextID MJOOFPBABEA; // 0x30
		::System::UInt32 HHPFKDEBMGP; // 0x40
		::RPG::GameCore::RogueRoomAttributeCategory OOMBNFMJLEO; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCALGNOKBJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCALGNOKBJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCALGNOKBJH*))((::PBYTE)hIl2Cpp + KCALGNOKBJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
