#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPADPKLBLNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB56F0)

	class GPADPKLBLNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusConfig*>* IHHGAJBBMDB; // 0x10
		::System::Int32 CKHEEJLAAJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPADPKLBLNP_CTOR_OFFSET))(this);
		}

	};
