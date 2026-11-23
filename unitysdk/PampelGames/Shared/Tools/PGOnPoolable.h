#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PampelGames/Shared/Tools/PGPoolable.h"

namespace PampelGames::Shared::Tools { class PGOnPoolable_OnPoolOnPoolUnSpawnClass; }
namespace PampelGames::Shared::Tools { class PGOnPoolable_OnPoolSpawnClass; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_1_OFFSET UNITYSDK_OFFSET(0x3DBC320)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_2_OFFSET UNITYSDK_OFFSET(0x3DBC2D0)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_3_OFFSET UNITYSDK_OFFSET(0x3DBC310)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_OFFSET UNITYSDK_OFFSET(0x3DBC350)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_BEA488A474B0C59B_OFFSET UNITYSDK_OFFSET(0x184C910)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_BEEF0F9442423396_OFFSET UNITYSDK_OFFSET(0x3DBC9F0)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_E9539170BC01F205_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F061B895F8D169D9_OFFSET UNITYSDK_OFFSET(0x3DBCA80)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F3D5CDB1E3A4C2CF_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F58E59CC543150FA_OFFSET UNITYSDK_OFFSET(0x3DBC900)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F92EB972CF1BCD3F_OFFSET UNITYSDK_OFFSET(0x3DBCB10)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_FA1014923F72317A_OFFSET UNITYSDK_OFFSET(0x3DBC630)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_FC066BFDF8013D81_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_FE52FEA9F1F7DB26_OFFSET UNITYSDK_OFFSET(0x3DBC360)
#define PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3DBCB90)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int PGOnPoolable_TypeDefinitionIndex = 21179;

	class PGOnPoolable : public ::PampelGames::Shared::Tools::PGPoolable
	{
	public:
		::System::Boolean destroyAfterExecute; // 0x30
		::System::Boolean randomInvoke; // 0x31
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::Single>* eventInstancesWeights; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* m_OnPoolSpawn; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* m_OnPoolUnSpawn; // 0x48

		::System::Void BEA488A474B0C59B(::System::Collections::Generic::List_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_BEA488A474B0C59B_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FE52FEA9F1F7DB26()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_FE52FEA9F1F7DB26_OFFSET))(this);
		}

		::System::Void B4C83742154B5770(::UnityEngine::GameObject* AD1247287D2D9217)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_OFFSET))(this, AD1247287D2D9217);
		}

		::System::Collections::IEnumerator* BEEF0F9442423396(::PampelGames::Shared::Tools::PGOnPoolable_OnPoolSpawnClass* E3E39DBF0C5DD578)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::PampelGames::Shared::Tools::PGOnPoolable_OnPoolSpawnClass*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_BEEF0F9442423396_OFFSET))(this, E3E39DBF0C5DD578);
		}

		::System::Void B4C83742154B5770_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_1_OFFSET))(this);
		}

		::System::Void B4C83742154B5770_2(::System::Single B4A58A4ABADA5C6F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_2_OFFSET))(this, B4A58A4ABADA5C6F);
		}

		::System::Collections::Generic::List_1<::System::Object*>* F3D5CDB1E3A4C2CF()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F3D5CDB1E3A4C2CF_OFFSET))(this);
		}

		::System::Collections::IEnumerator* F061B895F8D169D9(::PampelGames::Shared::Tools::PGOnPoolable_OnPoolOnPoolUnSpawnClass* EC1006050DB5ACEA)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::PampelGames::Shared::Tools::PGOnPoolable_OnPoolOnPoolUnSpawnClass*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F061B895F8D169D9_OFFSET))(this, EC1006050DB5ACEA);
		}

		::System::Void F58E59CC543150FA(::UnityEngine::GameObject* AD1247287D2D9217, ::System::Single B4A58A4ABADA5C6F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F58E59CC543150FA_OFFSET))(this, AD1247287D2D9217, B4A58A4ABADA5C6F);
		}

		::System::Void E9539170BC01F205(::System::Collections::Generic::List_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_E9539170BC01F205_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::IEnumerator* F92EB972CF1BCD3F(::UnityEngine::GameObject* AD1247287D2D9217, ::System::Single B4A58A4ABADA5C6F)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_F92EB972CF1BCD3F_OFFSET))(this, AD1247287D2D9217, B4A58A4ABADA5C6F);
		}

		::System::Void FA1014923F72317A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_FA1014923F72317A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE__CTOR_OFFSET))(this);
		}

		::System::Void B4C83742154B5770_3(::UnityEngine::GameObject* AD1247287D2D9217, ::System::Single B4A58A4ABADA5C6F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_B4C83742154B5770_3_OFFSET))(this, AD1247287D2D9217, B4A58A4ABADA5C6F);
		}

		::System::Collections::Generic::List_1<::System::Object*>* FC066BFDF8013D81()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGONPOOLABLE_FC066BFDF8013D81_OFFSET))(this);
		}
	};
}
