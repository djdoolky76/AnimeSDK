#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
class DJMFLECOALG;
namespace System { class String; }

#define LHCEDDIGGIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A90C0)
#define LHCEDDIGGIK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB6A90D0)
#define LHCEDDIGGIK_NCGEIJFFHFH_OFFSET UNITYSDK_OFFSET(0xB6A9130)
#define LHCEDDIGGIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB6A9180)

	class LHCEDDIGGIK : public ::HGMMFJHJECA
	{
	public:
		::DJMFLECOALG* COKDGBEABHP; // 0x10
		::RPG::GameCore::FateContentParamType KECDAFAFJFA; // 0x18
		::System::Void _ctor(::RPG::GameCore::FateContentParamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + LHCEDDIGGIK_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCEDDIGGIK_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void NCGEIJFFHFH(::DJMFLECOALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJMFLECOALG*))((::PBYTE)hIl2Cpp + LHCEDDIGGIK_NCGEIJFFHFH_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCEDDIGGIK_TOSTRING_OFFSET))(this);
		}

	};
