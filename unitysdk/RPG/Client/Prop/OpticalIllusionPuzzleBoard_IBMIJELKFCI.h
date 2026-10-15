#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_IBMIJELKFCI_CTOR_OFFSET UNITYSDK_OFFSET(0xDD4BEC0)

namespace RPG::Client::Prop
{
	class OpticalIllusionPuzzleBoard_IBMIJELKFCI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DJNKMHHLKHM; // 0x10
		::System::UInt32 OFDOGEOPBCN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD_IBMIJELKFCI_CTOR_OFFSET))(this);
		}

	};
}
