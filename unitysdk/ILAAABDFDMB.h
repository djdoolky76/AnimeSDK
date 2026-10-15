#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FACKIAAMEHD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILAAABDFDMB_CTOR_OFFSET UNITYSDK_OFFSET(0x16493E10)
#define ILAAABDFDMB_JLLPNPBPKIJ_OFFSET UNITYSDK_OFFSET(0x16493D70)
#define ILAAABDFDMB_LPNPFLLAJCK_OFFSET UNITYSDK_OFFSET(0x16493CC0)

inline static constexpr unsigned int ILAAABDFDMB_TypeDefinitionIndex = 71814;

	class ILAAABDFDMB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FACKIAAMEHD*>* EKCKCHEDEBI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAAABDFDMB_CTOR_OFFSET))(this);
		}

		::FACKIAAMEHD* LPNPFLLAJCK(::System::String* a1)
		{
			return ((::FACKIAAMEHD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ILAAABDFDMB_LPNPFLLAJCK_OFFSET))(this, a1);
		}

		::System::Void JLLPNPBPKIJ(::System::String* a1, ::FACKIAAMEHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::FACKIAAMEHD*))((::PBYTE)hIl2Cpp + ILAAABDFDMB_JLLPNPBPKIJ_OFFSET))(this, a1, a2);
		}

	};
