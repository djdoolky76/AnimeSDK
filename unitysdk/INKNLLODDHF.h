#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN;
class POIONNNNCMJ;
namespace System { class Action; }

#define INKNLLODDHF_ADD_ONISFINISHEDCHANGED_OFFSET UNITYSDK_OFFSET(0x164F52E0)
#define INKNLLODDHF_CTOR_OFFSET UNITYSDK_OFFSET(0x164F53A0)
#define INKNLLODDHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164F55E0)
#define INKNLLODDHF_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x164F51F0)
#define INKNLLODDHF_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x164F51E0)
#define INKNLLODDHF_GET_REWARDCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x164F5210)
#define INKNLLODDHF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164F5480)
#define INKNLLODDHF_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x164F5230)
#define INKNLLODDHF_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x164F54D0)
#define INKNLLODDHF_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x164F5270)
#define INKNLLODDHF_PCPJBFMLKEP_OFFSET UNITYSDK_OFFSET(0x164F56F0)
#define INKNLLODDHF_REMOVE_ONISFINISHEDCHANGED_OFFSET UNITYSDK_OFFSET(0x164F5340)
#define INKNLLODDHF_SET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x164F5200)
#define INKNLLODDHF_SET_REWARDCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x164F5220)

inline static constexpr unsigned int INKNLLODDHF_TypeDefinitionIndex = 79572;

	class INKNLLODDHF : public ::System::Object
	{
	public:
		::ALAOCJKOBCN* _ConditionDesc_k__BackingField; // 0x10
		::System::Action* OnIsFinishedChanged; // 0x18
		::POIONNNNCMJ* _Model_k__BackingField; // 0x20
		::System::Int32 _RewardCoinCount_k__BackingField; // 0x28
		::System::Boolean INJJGMIGFFD; // 0x2C
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
