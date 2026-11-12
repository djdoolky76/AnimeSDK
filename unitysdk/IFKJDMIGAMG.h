#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
class NOEOAMBCKHB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IFKJDMIGAMG_CTOR_OFFSET UNITYSDK_OFFSET(0x16E8E540)

inline static constexpr unsigned int IFKJDMIGAMG_TypeDefinitionIndex = 79962;

	class IFKJDMIGAMG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* NDAEIMOKGFH; // 0x10
		::LPHINGPIEAJ* PBNIBHNFEPD; // 0x18
		::NOEOAMBCKHB* GNMLBOBPOEN; // 0x20
		::System::UInt32 BGJMONEGGGO; // 0x28
		::System::Boolean GCFJFDDBOKN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKJDMIGAMG_CTOR_OFFSET))(this);
		}

	};
