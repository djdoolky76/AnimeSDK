#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPCLJKFJALE;
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHGAJMAOPJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B2D70)

	class JHGAJMAOPJE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BPAPIPLLAGE; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameNavConnectInfo*>* CDDNKJLBNLK; // 0x18
		::System::Collections::Generic::List_1<::JPCLJKFJALE*>* MPJAHMKIICB; // 0x20
		::System::UInt32 GDBJDAOOCOH; // 0x28
		::System::Single FMCAINKKPCL; // 0x2C
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::UInt32 LLDCHLHNADA; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGAJMAOPJE_CTOR_OFFSET))(this);
		}

	};
