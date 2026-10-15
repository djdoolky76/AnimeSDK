#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN;
class POIONNNNCMJ;
namespace System { class Action; }

#define INKNLLODDHF_ADD_ONISFINISHEDCHANGED_OFFSET UNITYSDK_OFFSET(0x164E7280)
#define INKNLLODDHF_CTOR_OFFSET UNITYSDK_OFFSET(0x164E7340)
#define INKNLLODDHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164E7580)
#define INKNLLODDHF_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x164E7190)
#define INKNLLODDHF_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x164E7180)
#define INKNLLODDHF_GET_REWARDCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x164E71B0)
#define INKNLLODDHF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164E7420)
#define INKNLLODDHF_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x164E71D0)
#define INKNLLODDHF_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x164E7470)
#define INKNLLODDHF_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x164E7210)
#define INKNLLODDHF_PCPJBFMLKEP_OFFSET UNITYSDK_OFFSET(0x164E7690)
#define INKNLLODDHF_REMOVE_ONISFINISHEDCHANGED_OFFSET UNITYSDK_OFFSET(0x164E72E0)
#define INKNLLODDHF_SET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x164E71A0)
#define INKNLLODDHF_SET_REWARDCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x164E71C0)

inline static constexpr unsigned int INKNLLODDHF_TypeDefinitionIndex = 79571;

	class INKNLLODDHF : public ::System::Object
	{
	public:
		::System::Action* OnIsFinishedChanged; // 0x10
		::POIONNNNCMJ* _Model_k__BackingField; // 0x18
		::ALAOCJKOBCN* _ConditionDesc_k__BackingField; // 0x20
		::System::Boolean INJJGMIGFFD; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _RewardCoinCount_k__BackingField; // 0x2C
		::System::Void _ctor(::POIONNNNCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POIONNNNCMJ*))((::PBYTE)hIl2Cpp + INKNLLODDHF_CTOR_OFFSET))(this, a1);
		}

		::POIONNNNCMJ* get_Model()
		{
			return ((::POIONNNNCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_GET_MODEL_OFFSET))(this);
		}

		::ALAOCJKOBCN* get_ConditionDesc()
		{
			return ((::ALAOCJKOBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_GET_CONDITIONDESC_OFFSET))(this);
		}

		::System::Void set_ConditionDesc(::ALAOCJKOBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAOCJKOBCN*))((::PBYTE)hIl2Cpp + INKNLLODDHF_SET_CONDITIONDESC_OFFSET))(this, a1);
		}

		::System::Int32 get_RewardCoinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_GET_REWARDCOINCOUNT_OFFSET))(this);
		}

		::System::Void set_RewardCoinCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INKNLLODDHF_SET_REWARDCOINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INKNLLODDHF_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::Void add_OnIsFinishedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INKNLLODDHF_ADD_ONISFINISHEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsFinishedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INKNLLODDHF_REMOVE_ONISFINISHEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_DISPOSE_OFFSET))(this);
		}

		::System::Void PCPJBFMLKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_PCPJBFMLKEP_OFFSET))(this);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKNLLODDHF_LEEEAMMHPFM_OFFSET))(this);
		}

	};
