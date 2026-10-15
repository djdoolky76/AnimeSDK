#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BOKMIONPJNK_CGILFHOMCJJ_1_OFFSET UNITYSDK_OFFSET(0x1DCC8810)
#define BOKMIONPJNK_CGILFHOMCJJ_OFFSET UNITYSDK_OFFSET(0x1DCC8210)
#define BOKMIONPJNK_GCKKHEIOFOG_1_OFFSET UNITYSDK_OFFSET(0x1DCC9780)
#define BOKMIONPJNK_GCKKHEIOFOG_OFFSET UNITYSDK_OFFSET(0x1DCC8D00)

inline static constexpr unsigned int BOKMIONPJNK_TypeDefinitionIndex = 9942;

	class BOKMIONPJNK : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint CGILFHOMCJJ(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_CGILFHOMCJJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CGILFHOMCJJ_1(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_CGILFHOMCJJ_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GCKKHEIOFOG(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_GCKKHEIOFOG_OFFSET))(a1);
		}

		static ::System::Nullable_1<::RPG::GameCore::FixPoint> GCKKHEIOFOG_1(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>* a1)
		{
			return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable_1<::RPG::GameCore::FixPoint>>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_GCKKHEIOFOG_1_OFFSET))(a1);
		}

	};
