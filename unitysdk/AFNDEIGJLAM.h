#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AFNDEIGJLAM;
class FCOEMCEDLNL;
namespace System { class String; }

#define AFNDEIGJLAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC89EE0)
#define AFNDEIGJLAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC89BF0)

inline static constexpr unsigned int AFNDEIGJLAM_TypeDefinitionIndex = 13972;

	class AFNDEIGJLAM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* JBJJIOFBBCN; // 0x10
		::System::String* EGCJJGJJLOE; // 0x18
		::System::String* EDFFEFOCCBN; // 0x20
		::RPG::Client::TextID KNFOBJPKBPN; // 0x28
		::System::UInt32 LPNBEANGIGE; // 0x38
		::System::UInt32 EKJGBBEIHMD; // 0x3C
		::System::UInt32 ELGNMHLEEEH; // 0x40
		::System::UInt32 PBAOJGFDKDG; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNDEIGJLAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFNDEIGJLAM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFNDEIGJLAM*))((::PBYTE)hIl2Cpp + AFNDEIGJLAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
