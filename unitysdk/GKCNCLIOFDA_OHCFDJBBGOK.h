#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOIFBABMIGP.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Object; }

#define GKCNCLIOFDA_OHCFDJBBGOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8E850)
#define GKCNCLIOFDA_OHCFDJBBGOK_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x15A91750)
#define GKCNCLIOFDA_OHCFDJBBGOK_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x15A91770)

inline static constexpr unsigned int GKCNCLIOFDA_OHCFDJBBGOK_TypeDefinitionIndex = 53525;

	class GKCNCLIOFDA_OHCFDJBBGOK : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Object*>* _Options_k__BackingField; // 0x10
		::OOIFBABMIGP _Member_k__BackingField; // 0x18
		::System::Void _ctor(::OOIFBABMIGP a1, ::RPG::PoolList_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OOIFBABMIGP, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_OHCFDJBBGOK_CTOR_OFFSET))(this, a1, a2);
		}

		::OOIFBABMIGP get_Member()
		{
			return ((::OOIFBABMIGP(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_OHCFDJBBGOK_GET_MEMBER_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::Object*>* get_Options()
		{
			return ((::RPG::PoolList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_OHCFDJBBGOK_GET_OPTIONS_OFFSET))(this);
		}

	};
