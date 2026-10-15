#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEventV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAPODBNFMLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB93F0)
#define NAPODBNFMLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB9560)
#define NAPODBNFMLM_FDNOADPOCHD_OFFSET UNITYSDK_OFFSET(0xBAB9D50)
#define NAPODBNFMLM_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBAB9C30)
#define NAPODBNFMLM_LIBHFBCFACP_OFFSET UNITYSDK_OFFSET(0xBAB9A20)
#define NAPODBNFMLM__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBAB95B0)
#define NAPODBNFMLM__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBAB9A80)
#define NAPODBNFMLM__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBAB9B60)

inline static constexpr unsigned int NAPODBNFMLM_TypeDefinitionIndex = 52526;

	class NAPODBNFMLM
	{
	public:
		::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x68
		::System::String* FGMKCOANOOK; // 0x70
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HDBOBADLEML; // 0x78
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEventV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEventV2*))((::PBYTE)hIl2Cpp + NAPODBNFMLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPODBNFMLM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPODBNFMLM__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPODBNFMLM__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPODBNFMLM__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NAPODBNFMLM_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Boolean FDNOADPOCHD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPODBNFMLM_FDNOADPOCHD_OFFSET))(this, a1);
		}

		::System::Void LIBHFBCFACP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPODBNFMLM_LIBHFBCFACP_OFFSET))(this);
		}

	};
