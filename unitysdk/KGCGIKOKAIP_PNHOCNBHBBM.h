#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define KGCGIKOKAIP_PNHOCNBHBBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17907E60)

inline static constexpr unsigned int KGCGIKOKAIP_PNHOCNBHBBM_TypeDefinitionIndex = 89185;

class KGCGIKOKAIP_PNHOCNBHBBM : public ::System::Object
{
public:
	::UnityEngine::GameObject* JCKBADOJELB; // 0x10
	::System::Collections::Generic::HashSet_1<::AEMCAOEICDG*>* MIGJNCBNBEB; // 0x18
	::System::Collections::Generic::HashSet_1<::AEMCAOEICDG*>* AKKPLOKPIIB; // 0x20
	::System::Collections::Generic::HashSet_1<::AEMCAOEICDG*>* PLCOEDDDALI; // 0x28
	::System::Single LECBDADOLBE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_PNHOCNBHBBM__CTOR_OFFSET))(this);
	}
};
