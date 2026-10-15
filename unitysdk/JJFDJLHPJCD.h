#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JJFDJLHPJCD;

#define JJFDJLHPJCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0391D0)
#define JJFDJLHPJCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D039050)

	class JJFDJLHPJCD : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ONBFILEPHPC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFDJLHPJCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JJFDJLHPJCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JJFDJLHPJCD*))((::PBYTE)hIl2Cpp + JJFDJLHPJCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
