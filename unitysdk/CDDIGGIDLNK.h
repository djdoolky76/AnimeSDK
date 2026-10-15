#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJMLJBNICND.h"
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CDDIGGIDLNK_CTOR_OFFSET UNITYSDK_OFFSET(0xC763600)
#define CDDIGGIDLNK_GETPROXIES_OFFSET UNITYSDK_OFFSET(0xC763490)
#define CDDIGGIDLNK_GETPROXY_OFFSET UNITYSDK_OFFSET(0xC763530)
#define CDDIGGIDLNK_JDJKCGGFPBM_OFFSET UNITYSDK_OFFSET(0xC7632A0)
#define CDDIGGIDLNK_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0xC763590)

inline static constexpr unsigned int CDDIGGIDLNK_TypeDefinitionIndex = 78232;

	class CDDIGGIDLNK : public ::NJMLJBNICND
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIGGIDLNK_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* JDJKCGGFPBM()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIGGIDLNK_JDJKCGGFPBM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIGGIDLNK_GETPROXIES_OFFSET))(this);
		}

		::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDDIGGIDLNK_GETPROXY_OFFSET))(this, a1);
		}

		::System::Void RemoveProxy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDDIGGIDLNK_REMOVEPROXY_OFFSET))(this, a1);
		}

	};
