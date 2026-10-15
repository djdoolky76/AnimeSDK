#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGOGIDDNFOM_HINNOBMJGJA_OFFSET UNITYSDK_OFFSET(0xBE5D9A0)
#define OGOGIDDNFOM_NBOJEPKPDDF_OFFSET UNITYSDK_OFFSET(0xBE5E2A0)
#define OGOGIDDNFOM_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xBE5DE10)

	class OGOGIDDNFOM : public ::System::Object
	{
	public:
		static ::RPG::Client::NavMap::ISubNavMap* HINNOBMJGJA(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + OGOGIDDNFOM_HINNOBMJGJA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::NavMap::ISubNavMap* PAABEMLAHOL(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + OGOGIDDNFOM_PAABEMLAHOL_OFFSET))(a1, a2);
		}

		static ::System::Void NBOJEPKPDDF(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*))((::PBYTE)hIl2Cpp + OGOGIDDNFOM_NBOJEPKPDDF_OFFSET))(a1, a2);
		}

	};
