#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HONBPDEJDCC;
class LNLAOECCCDM;
namespace RPG::Client { class CakeRaceGameGuessCatData; }
namespace RPG::Client { class CakeRaceGameGuessData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2F6020)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F6140)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GETGUESSENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D2F61F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x1D2F5E50)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0x1D2F5F90)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_GUESSCATDATALIST_OFFSET UNITYSDK_OFFSET(0x1D2F5EF0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1D2F5F00)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1D2F5EA0)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__INITCATDATALIST_OFFSET UNITYSDK_OFFSET(0x1D2F6320)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1D2F61A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessData_TypeDefinitionIndex = 64478;

	class CakeRaceGameGuessData : public ::System::Object
	{
	public:
		::LNLAOECCCDM* _SectionViewData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>* _GuessCatDataList_k__BackingField; // 0x18
		::System::Void _ctor(::LNLAOECCCDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNLAOECCCDM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_CTOR_OFFSET))(this, a1);
		}

		::HONBPDEJDCC* get_CurrentSection()
		{
			return ((::HONBPDEJDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>* get_Sections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>* get_GuessCatDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameGuessCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_GUESSCATDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_SectionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_FieldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GET_FIELDID_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameGuessData* Create(::LNLAOECCCDM* a1)
		{
			return ((::RPG::Client::CakeRaceGameGuessData*(*)(::LNLAOECCCDM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt64 GetGuessEndTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA_GETGUESSENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitCatDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA__INITCATDATALIST_OFFSET))(this);
		}

	};
}
