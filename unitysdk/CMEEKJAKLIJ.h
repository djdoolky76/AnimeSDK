#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNDNFPHFBMK;
namespace System { class Object; }
namespace System { class Type; }

#define CMEEKJAKLIJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B18F5B0)
#define CMEEKJAKLIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B18F690)
#define CMEEKJAKLIJ_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B18F530)
#define CMEEKJAKLIJ_ICIFMFBBKPK_OFFSET UNITYSDK_OFFSET(0x1B18F600)
#define CMEEKJAKLIJ_MFAKHNJGMGF_OFFSET UNITYSDK_OFFSET(0x1B18F650)

inline static constexpr unsigned int CMEEKJAKLIJ_TypeDefinitionIndex = 69124;

	class CMEEKJAKLIJ : public ::System::Object
	{
	public:
		::PNDNFPHFBMK* KOELAECGNPD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEEKJAKLIJ_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CMEEKJAKLIJ_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEEKJAKLIJ_CLEAR_OFFSET))(this);
		}

		::System::Void ICIFMFBBKPK(::PNDNFPHFBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNDNFPHFBMK*))((::PBYTE)hIl2Cpp + CMEEKJAKLIJ_ICIFMFBBKPK_OFFSET))(this, a1);
		}

		::PNDNFPHFBMK* MFAKHNJGMGF()
		{
			return ((::PNDNFPHFBMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEEKJAKLIJ_MFAKHNJGMGF_OFFSET))(this);
		}

	};
