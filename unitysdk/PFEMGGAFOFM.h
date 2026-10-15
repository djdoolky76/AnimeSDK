#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJMLJBNICND.h"
class DLECIKAMKEG;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PFEMGGAFOFM_CTOR_OFFSET UNITYSDK_OFFSET(0xC20BED0)
#define PFEMGGAFOFM_GETPROXIES_OFFSET UNITYSDK_OFFSET(0xC20BF60)
#define PFEMGGAFOFM_GETPROXY_OFFSET UNITYSDK_OFFSET(0xC20C0B0)
#define PFEMGGAFOFM_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0xC20C220)

inline static constexpr unsigned int PFEMGGAFOFM_TypeDefinitionIndex = 78233;

	class PFEMGGAFOFM : public ::NJMLJBNICND
	{
	public:
		::DLECIKAMKEG* GFEEFEAAMPH; // 0x18
		::System::Void _ctor(::DLECIKAMKEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + PFEMGGAFOFM_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEMGGAFOFM_GETPROXIES_OFFSET))(this);
		}

		::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFEMGGAFOFM_GETPROXY_OFFSET))(this, a1);
		}

		::System::Void RemoveProxy(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFEMGGAFOFM_REMOVEPROXY_OFFSET))(this, a1);
		}

	};
