#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KGMPJMIAPCI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PCGKKAMOHBE_AKKPEONJFFK_OFFSET UNITYSDK_OFFSET(0x1AACF8C0)
#define PCGKKAMOHBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AACFAB0)
#define PCGKKAMOHBE_GHDNPKNPCDA_OFFSET UNITYSDK_OFFSET(0x1AACF030)
#define PCGKKAMOHBE_HBIDGLCEAGM_OFFSET UNITYSDK_OFFSET(0x1AACEE40)
#define PCGKKAMOHBE_LFINMLHCELH_OFFSET UNITYSDK_OFFSET(0x1AACF6B0)
#define PCGKKAMOHBE_OFGLEAFJGAN_OFFSET UNITYSDK_OFFSET(0x1AACF5D0)
#define PCGKKAMOHBE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1AACEE90)
#define PCGKKAMOHBE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1AACEDD0)
#define PCGKKAMOHBE_OOOKCBIBHBA_OFFSET UNITYSDK_OFFSET(0x1AACF3E0)
#define PCGKKAMOHBE_OPOCHDENOHL_OFFSET UNITYSDK_OFFSET(0x1AACF730)
#define PCGKKAMOHBE__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AACEF30)
#define PCGKKAMOHBE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1AACEEE0)
#define PCGKKAMOHBE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AACEFC0)

inline static constexpr unsigned int PCGKKAMOHBE_TypeDefinitionIndex = 73596;

	class PCGKKAMOHBE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* NBAPJOBMGNF; // 0x60
		::Il2CppArray<::System::String*>* DBIABMGPFME; // 0x68
		::System::Collections::Generic::List_1<::KGMPJMIAPCI*>* MLJDAEMEBFJ; // 0x70
		::System::Int32 DEBFEIKENAO; // 0x78
		// static const ::System::String* LJPHIHJHIAJ; // 0x0
		// static const ::System::String* CMFAEPNLGIB; // 0x0
		// static const ::System::String* MGDFDECEKGP; // 0x0
		// static const ::System::String* KCMFDJLBJPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_CTOR_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PCGKKAMOHBE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void HBIDGLCEAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_HBIDGLCEAGM_OFFSET))(this);
		}

		::System::Void GHDNPKNPCDA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_GHDNPKNPCDA_OFFSET))(this, a1, a2);
		}

		::System::Void OPOCHDENOHL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_OPOCHDENOHL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OOOKCBIBHBA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_OOOKCBIBHBA_OFFSET))(this, a1, a2);
		}

		::System::Void OFGLEAFJGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_OFGLEAFJGAN_OFFSET))(this);
		}

		::System::String* LFINMLHCELH(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_LFINMLHCELH_OFFSET))(this, a1, a2);
		}

		::System::Void AKKPEONJFFK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_AKKPEONJFFK_OFFSET))(this, a1);
		}

	};
