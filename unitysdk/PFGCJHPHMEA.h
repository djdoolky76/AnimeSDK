#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueDLC1Dot3PictureFrameDisappear; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define PFGCJHPHMEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC206810)
#define PFGCJHPHMEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC206820)
#define PFGCJHPHMEA_GHNPDHFIFOI_OFFSET UNITYSDK_OFFSET(0xC206C70)
#define PFGCJHPHMEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC206920)
#define PFGCJHPHMEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC206BE0)
#define PFGCJHPHMEA_TICK_OFFSET UNITYSDK_OFFSET(0xC2068C0)

inline static constexpr unsigned int PFGCJHPHMEA_TypeDefinitionIndex = 58458;

	class PFGCJHPHMEA : public ::GELIALJDFBL
	{
	public:
		::System::String* ONNNFNOIHLF; // 0x18
		::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3PictureFrameDisappear*))((::PBYTE)hIl2Cpp + PFGCJHPHMEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGCJHPHMEA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFGCJHPHMEA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGCJHPHMEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGCJHPHMEA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void GHNPDHFIFOI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + PFGCJHPHMEA_GHNPDHFIFOI_OFFSET))(this, a1, a2);
		}

	};
