#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class HGAJKHIMKJP;
class JFFIPPCGFPF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXPEDITIONREWARDPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B4A5760)
#define MOLEMOLE_EXPEDITIONREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1B4A5F40)
#define MOLEMOLE_EXPEDITIONREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A5770)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionRewardPopShow_TypeDefinitionIndex = 45759;

	class ExpeditionRewardPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* MaterialItem; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* AdditionalIndexs; // 0x30
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* SpecialItem; // 0x38
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* CombineItemDatas; // 0x40
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* OnceItem; // 0x48
		::System::Int32 finalExpeditionValue; // 0x50
		::System::Int32 accessID; // 0x54
		::System::Int32 lastRewardCount; // 0x58
		::System::Int32 finalRewardCount; // 0x5C
		::System::Int32 finalAreaProgress; // 0x60
		::System::Int32 lastAreaProgress; // 0x64
		::System::Int32 maxRewardCount; // 0x68
		::System::Int32 lastExpeditionValue; // 0x6C

		::System::Void _ctor(::JFFIPPCGFPF* material, ::JFFIPPCGFPF* onceReward)
		{
			return ((::System::Void(*)(::PVOID, ::JFFIPPCGFPF*, ::JFFIPPCGFPF*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDPOPSHOW__CTOR_OFFSET))(this, material, onceReward);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
