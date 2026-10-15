#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKCNCLIOFDA_OHCFDJBBGOK;
namespace System { class Object; }

#define GKCNCLIOFDA_EPNILOJFGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A832D0)
#define GKCNCLIOFDA_EPNILOJFGBJ_GET_DOUBLEPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A84A20)
#define GKCNCLIOFDA_EPNILOJFGBJ_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A84A40)
#define GKCNCLIOFDA_EPNILOJFGBJ_GET_SINGLEMEMBER_OFFSET UNITYSDK_OFFSET(0x15A84A30)

inline static constexpr unsigned int GKCNCLIOFDA_EPNILOJFGBJ_TypeDefinitionIndex = 53528;

	class GKCNCLIOFDA_EPNILOJFGBJ : public ::System::Object
	{
	public:
		::GKCNCLIOFDA_OHCFDJBBGOK* _SingleMember_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Participants_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _DoubleParticipants_k__BackingField; // 0x20
		::System::Void _ctor(::Il2CppArray<::System::Object*>* a1, ::GKCNCLIOFDA_OHCFDJBBGOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::GKCNCLIOFDA_OHCFDJBBGOK*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_EPNILOJFGBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* get_DoubleParticipants()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_EPNILOJFGBJ_GET_DOUBLEPARTICIPANTS_OFFSET))(this);
		}

		::GKCNCLIOFDA_OHCFDJBBGOK* get_SingleMember()
		{
			return ((::GKCNCLIOFDA_OHCFDJBBGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_EPNILOJFGBJ_GET_SINGLEMEMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Participants()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_EPNILOJFGBJ_GET_PARTICIPANTS_OFFSET))(this);
		}

	};
