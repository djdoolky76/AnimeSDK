#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBFFCBPMKEF.h"
class ENEIHJJPNPI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FODPNNIJCJI_CMEAAFAOMNJ_OFFSET UNITYSDK_OFFSET(0x16813DA0)
#define FODPNNIJCJI_CTOR_OFFSET UNITYSDK_OFFSET(0x16813FE0)
#define FODPNNIJCJI_GDEJIHHKNBI_OFFSET UNITYSDK_OFFSET(0x16813D30)

inline static constexpr unsigned int FODPNNIJCJI_TypeDefinitionIndex = 58790;

	class FODPNNIJCJI : public ::JBFFCBPMKEF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODPNNIJCJI_CTOR_OFFSET))(this);
		}

		::System::Void GDEJIHHKNBI(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + FODPNNIJCJI_GDEJIHHKNBI_OFFSET))(this, a1);
		}

		::System::Void CMEAAFAOMNJ(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + FODPNNIJCJI_CMEAAFAOMNJ_OFFSET))(this, a1);
		}

	};
