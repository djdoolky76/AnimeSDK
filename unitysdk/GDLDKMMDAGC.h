#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBaseHitStateSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define GDLDKMMDAGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x159A4E10)
#define GDLDKMMDAGC_CTOR_OFFSET UNITYSDK_OFFSET(0x159A49F0)
#define GDLDKMMDAGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A4A20)

inline static constexpr unsigned int GDLDKMMDAGC_TypeDefinitionIndex = 55890;

	class GDLDKMMDAGC
	{
	public:
		static ::System::Int32* StaticGet_BCEDIKIDHMD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GDLDKMMDAGC")->GetStaticField(0x13020);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBaseHitStateSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBaseHitStateSpeed*))((::PBYTE)hIl2Cpp + GDLDKMMDAGC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLDKMMDAGC_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLDKMMDAGC_ONTASKBEGIN_OFFSET))(this);
		}

	};
