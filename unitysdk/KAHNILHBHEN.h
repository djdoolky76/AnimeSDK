#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class ShowMenu; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KAHNILHBHEN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5A7A0)
#define KAHNILHBHEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB5A7B0)
#define KAHNILHBHEN_EOFJIPBCEGF_OFFSET UNITYSDK_OFFSET(0xBB5BD20)
#define KAHNILHBHEN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBB5BD60)
#define KAHNILHBHEN_GMCIOCENFKM_OFFSET UNITYSDK_OFFSET(0xBB5B6E0)
#define KAHNILHBHEN_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xBB5BCD0)
#define KAHNILHBHEN_JLFFDJIFDDF_OFFSET UNITYSDK_OFFSET(0xBB5B9B0)
#define KAHNILHBHEN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBB5AE90)
#define KAHNILHBHEN_LHJPKFDLIIN_OFFSET UNITYSDK_OFFSET(0xBB5AE50)
#define KAHNILHBHEN_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBB5B1E0)
#define KAHNILHBHEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB5A870)
#define KAHNILHBHEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB5B0C0)
#define KAHNILHBHEN_PJJPFDECFAG_OFFSET UNITYSDK_OFFSET(0xBB5B260)
#define KAHNILHBHEN_TICK_OFFSET UNITYSDK_OFFSET(0xBB5B180)

inline static constexpr unsigned int KAHNILHBHEN_TypeDefinitionIndex = 59939;

	class KAHNILHBHEN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowMenu* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::LevelGraphComponent* JBCGBIOECCL; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Int32 JMBKEMHBFLE; // 0x30
		::System::Boolean FMICDIJAHGE; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 EGOCAOIFKBB; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMenu* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMenu*))((::PBYTE)hIl2Cpp + KAHNILHBHEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAHNILHBHEN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_ONSKIP_OFFSET))(this);
		}

		::System::Void PJJPFDECFAG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAHNILHBHEN_PJJPFDECFAG_OFFSET))(this, a1);
		}

		::System::Void GMCIOCENFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_GMCIOCENFKM_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void LHJPKFDLIIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_LHJPKFDLIIN_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void EOFJIPBCEGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_EOFJIPBCEGF_OFFSET))(this);
		}

		::System::Void JLFFDJIFDDF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KAHNILHBHEN_JLFFDJIFDDF_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHNILHBHEN_GET_FORCESKIP_OFFSET))(this);
		}

	};
