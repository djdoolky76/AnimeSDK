#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NKNKALIOEGG;

#define NKNKALIOEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D230AB0)
#define NKNKALIOEGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2308C0)

	class NKNKALIOEGG : public ::System::Object
	{
	public:
		::System::UInt32 AAGKEBFHLMC; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID POLNOFFLNID; // 0x18
		::RPG::Client::TextID NIHODMLGCIK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNKALIOEGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKNKALIOEGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKNKALIOEGG*))((::PBYTE)hIl2Cpp + NKNKALIOEGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
