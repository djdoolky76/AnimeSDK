#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }

#define MIHOYOEMOTION_SEQUENCEBAKEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB720910)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0xB720900)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0xB7208E0)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_EMOTIONBAKEDATA_OFFSET UNITYSDK_OFFSET(0xB7208F0)
#define MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET UNITYSDK_OFFSET(0xB7208D0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceBakeData_TypeDefinitionIndex = 46995;

	class SequenceBakeData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_CTOR_OFFSET))(this);
		}

		::System::Void set_phonemeBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_PHONEMEBAKEDATA_OFFSET))(this, a1);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_phonemeBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_PHONEMEBAKEDATA_OFFSET))(this);
		}

		::System::Void set_emotionBakeData(::miHoYoEmotion::SequenceBakeData_BakeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_SET_EMOTIONBAKEDATA_OFFSET))(this, a1);
		}

		::miHoYoEmotion::SequenceBakeData_BakeData* get_emotionBakeData()
		{
			return ((::miHoYoEmotion::SequenceBakeData_BakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_GET_EMOTIONBAKEDATA_OFFSET))(this);
		}

	};
}
