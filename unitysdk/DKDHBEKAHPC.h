#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class APADFFNMMAN;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define DKDHBEKAHPC_CTOR_OFFSET UNITYSDK_OFFSET(0xF875010)
#define DKDHBEKAHPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF875020)
#define DKDHBEKAHPC_FJLKLEANPLE_OFFSET UNITYSDK_OFFSET(0xF875740)
#define DKDHBEKAHPC_HMMIODJHOPI_OFFSET UNITYSDK_OFFSET(0xF875150)
#define DKDHBEKAHPC_IKPMNJICNAM_OFFSET UNITYSDK_OFFSET(0xF875A30)
#define DKDHBEKAHPC_LGOMCAMCMII_OFFSET UNITYSDK_OFFSET(0xF875FB0)
#define DKDHBEKAHPC_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0xF875F60)
#define DKDHBEKAHPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xF875E40)
#define DKDHBEKAHPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8751C0)
#define DKDHBEKAHPC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF875CA0)
#define DKDHBEKAHPC_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0xF875EA0)
#define DKDHBEKAHPC_TICK_OFFSET UNITYSDK_OFFSET(0xF875DE0)

	class DKDHBEKAHPC : public ::GELIALJDFBL
	{
	public:
		::System::String* INEKCEFFNCL; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::APADFFNMMAN* OFKGLJOAMLD; // 0x28
		::System::Boolean GHPHJKOBOJI; // 0x30
		// static const ::System::String* JPJAMENFBKD; // 0x0
		// static const ::System::String* LFMEPFFAJHG; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::APADFFNMMAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::APADFFNMMAN*))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void HMMIODJHOPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_HMMIODJHOPI_OFFSET))(this);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_LLDKMAMCNIA_OFFSET))(this);
		}

		::System::Void FJLKLEANPLE(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_FJLKLEANPLE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* IKPMNJICNAM(::RPG::GameCore::BubbleTalkInfo* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_IKPMNJICNAM_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::System::Object*>* LGOMCAMCMII(::System::Object* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + DKDHBEKAHPC_LGOMCAMCMII_OFFSET))(a1);
		}

	};
