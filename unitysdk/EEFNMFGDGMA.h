#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEFNMFGDGMA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2C710)

	class EEFNMFGDGMA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* DKCFMFPKANO; // 0x10
		::System::UInt32 FGIIJIMIBCI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFNMFGDGMA_CTOR_OFFSET))(this);
		}

	};
