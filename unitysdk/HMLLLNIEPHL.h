#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMLLLNIEPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAED0E0)

	class HMLLLNIEPHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* HIOJFCKHFGO; // 0x10
		::System::Boolean EKFDEEHCKDH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLLLNIEPHL_CTOR_OFFSET))(this);
		}

	};
