#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableSmoothLoadBattle; }
namespace RPG::GameCore { class TaskContext; }

#define IJKKIOCICNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1805C3B0)
#define IJKKIOCICNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1805C000)
#define IJKKIOCICNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1805C030)

inline static constexpr unsigned int IJKKIOCICNF_TypeDefinitionIndex = 56193;

	class IJKKIOCICNF
	{
	public:
		static ::System::Single* StaticGet_GCMNCCJMKEN()
		{
			return (::System::Single*)UnitySDK::FromName("", "IJKKIOCICNF")->GetStaticField(0x149D0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableSmoothLoadBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableSmoothLoadBattle*))((::PBYTE)hIl2Cpp + IJKKIOCICNF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJKKIOCICNF_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKKIOCICNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
