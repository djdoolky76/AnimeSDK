#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEILLGKDMB;
class HKPOAGEKMAM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MLPBHLMGMGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C48E3D0)
#define MLPBHLMGMGP_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1C48E1F0)
#define MLPBHLMGMGP_LANIHFLKEHH_OFFSET UNITYSDK_OFFSET(0x1C48E380)

inline static constexpr unsigned int MLPBHLMGMGP_TypeDefinitionIndex = 41523;

	class MLPBHLMGMGP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPBHLMGMGP_CTOR_OFFSET))(this);
		}

		static ::HKPOAGEKMAM* EFMKONMGMNA(::System::String* a1)
		{
			return ((::HKPOAGEKMAM*(*)(::System::String*))((::PBYTE)hIl2Cpp + MLPBHLMGMGP_EFMKONMGMNA_OFFSET))(a1);
		}

		static ::System::Void LANIHFLKEHH(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::AMEILLGKDMB*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::AMEILLGKDMB*>*))((::PBYTE)hIl2Cpp + MLPBHLMGMGP_LANIHFLKEHH_OFFSET))(a1, a2);
		}

	};
