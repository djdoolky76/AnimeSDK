#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"
class GLLIPCNMDBO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMMPEKICPIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C909810)

inline static constexpr unsigned int KMMPEKICPIH_TypeDefinitionIndex = 43672;

	class KMMPEKICPIH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::GLLIPCNMDBO*>*>* KHBNAGNKKJL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMPEKICPIH_CTOR_OFFSET))(this);
		}

	};
