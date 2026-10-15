#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BOKMIONPJNK_CGILFHOMCJJ_1_OFFSET UNITYSDK_OFFSET(0x1DCF6040)
#define BOKMIONPJNK_CGILFHOMCJJ_OFFSET UNITYSDK_OFFSET(0x1DCF5A40)
#define BOKMIONPJNK_GCKKHEIOFOG_1_OFFSET UNITYSDK_OFFSET(0x1DCF6FB0)
#define BOKMIONPJNK_GCKKHEIOFOG_OFFSET UNITYSDK_OFFSET(0x1DCF6530)

	class BOKMIONPJNK : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint CGILFHOMCJJ(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_CGILFHOMCJJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CGILFHOMCJJ_1(::System::Collections::Generic::IEnumerable_1<::System::Nullable*>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable*>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_CGILFHOMCJJ_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint GCKKHEIOFOG(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_GCKKHEIOFOG_OFFSET))(a1);
		}

		static ::System::Nullable* GCKKHEIOFOG_1(::System::Collections::Generic::IEnumerable_1<::System::Nullable*>* a1)
		{
			return ((::System::Nullable*(*)(::System::Collections::Generic::IEnumerable_1<::System::Nullable*>*))((::PBYTE)hIl2Cpp + BOKMIONPJNK_GCKKHEIOFOG_1_OFFSET))(a1);
		}

	};
