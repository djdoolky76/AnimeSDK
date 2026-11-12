#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueRoomAttributeCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KCALGNOKBJH;
namespace System { class String; }

#define KCALGNOKBJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E255640)
#define KCALGNOKBJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E255370)

inline static constexpr unsigned int KCALGNOKBJH_TypeDefinitionIndex = 15215;

	class KCALGNOKBJH : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::RPG::Client::TextID MJOOFPBABEA; // 0x20
		::System::UInt32 HHPFKDEBMGP; // 0x30
		::RPG::GameCore::RogueRoomAttributeCategory OOMBNFMJLEO; // 0x34
		::RPG::Client::TextID NMAHGFAPENI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCALGNOKBJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCALGNOKBJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCALGNOKBJH*))((::PBYTE)hIl2Cpp + KCALGNOKBJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
