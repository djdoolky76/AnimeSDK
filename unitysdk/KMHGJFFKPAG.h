#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMHGJFFKPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C908A90)

	class KMHGJFFKPAG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::PingPongDropItemType>* GAIGDIDJJOA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGJFFKPAG_CTOR_OFFSET))(this);
		}

	};
