#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTutorialGuideTalk; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALGUIDETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6810)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DAE6820)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE67E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialGuideTalk_TypeDefinitionIndex = 24345;

	class ShowTutorialGuideTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GuideResID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* GuideTalkIDList; // 0x20
		::System::String* NodeID; // 0x28
		::System::Single OffsetX; // 0x30
		::System::Single OffsetY; // 0x34
		::System::Boolean Follow; // 0x38
		::System::Boolean Is3DObject; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialGuideTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialGuideTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
