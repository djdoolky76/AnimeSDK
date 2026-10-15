#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAGKMDGBGFL;
class GHGAFIIFPEC;
class GPLMLPKBGGE;
class PMBMFHMKBNC;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KADPPOJNAOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D3BD0)
#define KADPPOJNAOI_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0xB2D3BE0)

inline static constexpr unsigned int KADPPOJNAOI_TypeDefinitionIndex = 80243;

	class KADPPOJNAOI : public ::System::Object
	{
	public:
		::GAGKMDGBGFL* MJHHLOPFDNK; // 0x10
		::GHGAFIIFPEC* DOIMIHLLDGH; // 0x18
		::System::Void _ctor(::GAGKMDGBGFL* a1, ::GHGAFIIFPEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GAGKMDGBGFL*, ::GHGAFIIFPEC*))((::PBYTE)hIl2Cpp + KADPPOJNAOI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::PMBMFHMKBNC*>* OHCJOIANPFG(::GPLMLPKBGGE* a1, ::System::Collections::Generic::IEnumerable_1<::GPLMLPKBGGE*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::PMBMFHMKBNC*>*(*)(::PVOID, ::GPLMLPKBGGE*, ::System::Collections::Generic::IEnumerable_1<::GPLMLPKBGGE*>*))((::PBYTE)hIl2Cpp + KADPPOJNAOI_OHCJOIANPFG_OFFSET))(this, a1, a2);
		}

	};
