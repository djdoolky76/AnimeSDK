#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FormationMoveAddGroup; }
namespace RPG::GameCore { class FormationMoveConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CMDKCCMNANL_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA28F70)
#define CMDKCCMNANL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA28480)
#define CMDKCCMNANL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA28490)
#define CMDKCCMNANL_GMJKMOOJDEJ_OFFSET UNITYSDK_OFFSET(0xDA28E90)
#define CMDKCCMNANL_KOBJGGBKJCN_OFFSET UNITYSDK_OFFSET(0xDA288A0)
#define CMDKCCMNANL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA28540)
#define CMDKCCMNANL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA28DE0)
#define CMDKCCMNANL_TICK_OFFSET UNITYSDK_OFFSET(0xDA28E30)

inline static constexpr unsigned int CMDKCCMNANL_TypeDefinitionIndex = 58128;

	class CMDKCCMNANL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::FormationMoveAddGroup* OFKGLJOAMLD; // 0x20
		::System::UInt32 MMILCBFLPDJ; // 0x28
		::System::Boolean BHEIANKOOPN; // 0x2C
		static ::RPG::GameCore::FormationMoveConfig** StaticGet_NENCNIICGGB()
		{
			return (::RPG::GameCore::FormationMoveConfig**)UnitySDK::FromName("", "CMDKCCMNANL")->GetStaticField(0x504D0);
		}

		static ::System::String** StaticGet_IDFGNBHPILO()
		{
			return (::System::String**)UnitySDK::FromName("", "CMDKCCMNANL")->GetStaticField(0x504D8);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveAddGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveAddGroup*))((::PBYTE)hIl2Cpp + CMDKCCMNANL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMDKCCMNANL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDKCCMNANL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDKCCMNANL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDKCCMNANL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMDKCCMNANL_TICK_OFFSET))(this, a1);
		}

		::System::Boolean KOBJGGBKJCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMDKCCMNANL_KOBJGGBKJCN_OFFSET))(this);
		}

		::System::Void GMJKMOOJDEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMDKCCMNANL_GMJKMOOJDEJ_OFFSET))(this, a1);
		}

	};
