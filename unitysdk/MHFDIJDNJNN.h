#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MatchThreeScoreCurveRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHFDIJDNJNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92AD30)

inline static constexpr unsigned int MHFDIJDNJNN_TypeDefinitionIndex = 42251;

	class MHFDIJDNJNN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MatchThreeScoreCurveRow*>*>* FFABIPEJNAJ; // 0x10
		::System::UInt32 DGIPOMANFEM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFDIJDNJNN_CTOR_OFFSET))(this);
		}

	};
