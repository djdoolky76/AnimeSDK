#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvSetIgnoreCollision; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define GDNOBIGDAGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x159B97E0)
#define GDNOBIGDAGD_CTOR_OFFSET UNITYSDK_OFFSET(0x159B7F20)
#define GDNOBIGDAGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159B8DC0)
#define GDNOBIGDAGD_LHKFEMCGCNP_OFFSET UNITYSDK_OFFSET(0x159B8E40)
#define GDNOBIGDAGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159B7FB0)
#define GDNOBIGDAGD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159B8470)
#define GDNOBIGDAGD_PEMELLLEHLE_OFFSET UNITYSDK_OFFSET(0x159B9400)
#define GDNOBIGDAGD_TICK_OFFSET UNITYSDK_OFFSET(0x159B8D60)

inline static constexpr unsigned int GDNOBIGDAGD_TypeDefinitionIndex = 52496;

	class GDNOBIGDAGD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntityList* IMBFLHNCLNP; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* LNBCCNBBCIA; // 0x28
		::RPG::GameCore::AdvSetIgnoreCollision* OFKGLJOAMLD; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* DFBKGOCEDOG; // 0x38
		::RPG::GameCore::GameEntityList* IGDHGLCHEDO; // 0x40
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LBLMADFNJOC()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("", "GDNOBIGDAGD")->GetStaticField(0x56FB0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetIgnoreCollision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetIgnoreCollision*))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDNOBIGDAGD_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_DISPOSE_OFFSET))(this);
		}

		::System::Void LHKFEMCGCNP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_LHKFEMCGCNP_OFFSET))(this, a1);
		}

		::System::Void PEMELLLEHLE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GDNOBIGDAGD_PEMELLLEHLE_OFFSET))(this, a1);
		}

	};
