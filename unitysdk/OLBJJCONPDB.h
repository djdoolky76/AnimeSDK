#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLBJJCONPDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F8E0)

inline static constexpr unsigned int OLBJJCONPDB_TypeDefinitionIndex = 41974;

	class OLBJJCONPDB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* DKAIHJOECHB; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEventType, ::System::Collections::Generic::List_1<::System::Int32>*>* BHGJADDDJNK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBJJCONPDB_CTOR_OFFSET))(this);
		}

	};
