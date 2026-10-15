#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFLCCJFKNF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }

#define FCLGAONFCME_CTOR_OFFSET UNITYSDK_OFFSET(0x156C2630)
#define FCLGAONFCME_ENGEHBPCHHA_OFFSET UNITYSDK_OFFSET(0x156C26A0)
#define FCLGAONFCME_GET_ID_OFFSET UNITYSDK_OFFSET(0x156C2640)
#define FCLGAONFCME_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x156C2660)
#define FCLGAONFCME_GET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0x156C2680)
#define FCLGAONFCME_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x156C2740)
#define FCLGAONFCME_MCEBLOPBMON_OFFSET UNITYSDK_OFFSET(0x156C27A0)
#define FCLGAONFCME_SET_ID_OFFSET UNITYSDK_OFFSET(0x156C2650)
#define FCLGAONFCME_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x156C2670)
#define FCLGAONFCME_SET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0x156C2690)

inline static constexpr unsigned int FCLGAONFCME_TypeDefinitionIndex = 66972;

	class FCLGAONFCME : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _SortValue_k__BackingField; // 0x14
		::System::UInt32 _QuestID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLGAONFCME_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGAONFCME_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLGAONFCME_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGAONFCME_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLGAONFCME_SET_QUESTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGAONFCME_GET_SORTVALUE_OFFSET))(this);
		}

		::System::Void set_SortValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLGAONFCME_SET_SORTVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* ENGEHBPCHHA()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGAONFCME_ENGEHBPCHHA_OFFSET))(this);
		}

		::AKFLCCJFKNF JBENBABCOGB()
		{
			return ((::AKFLCCJFKNF(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGAONFCME_JBENBABCOGB_OFFSET))(this);
		}

		::System::UInt32 MCEBLOPBMON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLGAONFCME_MCEBLOPBMON_OFFSET))(this);
		}

	};
