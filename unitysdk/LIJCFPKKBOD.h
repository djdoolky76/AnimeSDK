#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LIJCFPKKBOD;
namespace System { class String; }

#define LIJCFPKKBOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9683E0)
#define LIJCFPKKBOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E967E80)

inline static constexpr unsigned int LIJCFPKKBOD_TypeDefinitionIndex = 14086;

	class LIJCFPKKBOD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OOBCHJJPIAC; // 0x10
		::System::String* EEIEODMEMFI; // 0x18
		::Il2CppArray<::System::UInt32>* DCCHGAPFMJI; // 0x20
		::Il2CppArray<::System::UInt32>* OGICJALDJHP; // 0x28
		::Il2CppArray<::System::UInt32>* JBJJIOFBBCN; // 0x30
		::Il2CppArray<::System::UInt32>* OMLFNLJDHKG; // 0x38
		::System::String* ODLDEEANNCM; // 0x40
		::Il2CppArray<::System::UInt32>* ANPKNOHCPDK; // 0x48
		::Il2CppArray<::System::UInt32>* IODMEPHIMDB; // 0x50
		::Il2CppArray<::System::UInt32>* MGAANANONJP; // 0x58
		::RPG::GameCore::LimaoNewsOfficeSurveyType AAPEGNAHMJB; // 0x60
		::System::UInt32 KHIALKEMEGH; // 0x64
		::System::UInt32 ADJDGJOFEJF; // 0x68
		::System::UInt32 HIHLLBFEONI; // 0x6C
		::System::Boolean OFMBPNHDBBE; // 0x70
		::System::Byte _padding0[0x3];
		::System::UInt32 JFKMFBPMDPI; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCFPKKBOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LIJCFPKKBOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LIJCFPKKBOD*))((::PBYTE)hIl2Cpp + LIJCFPKKBOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
