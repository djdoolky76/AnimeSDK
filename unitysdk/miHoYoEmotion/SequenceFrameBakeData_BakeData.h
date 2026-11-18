#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/SequenceBakeData_BakeData.h"

namespace System { class Object; }

#define MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_BAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3450)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int SequenceFrameBakeData_BakeData_TypeDefinitionIndex = 37987;

	class SequenceFrameBakeData_BakeData : public ::miHoYoEmotion::SequenceBakeData_BakeData
	{
	public:
		::Il2CppArray<::System::Object*>* bakedBindings; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEFRAMEBAKEDATA_BAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
