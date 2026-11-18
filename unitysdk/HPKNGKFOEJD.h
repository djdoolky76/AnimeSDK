#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define HPKNGKFOEJD_GFFICGKPLBL_OFFSET UNITYSDK_OFFSET(0x15393D90)
#define HPKNGKFOEJD_JPHMIGDOKKI_OFFSET UNITYSDK_OFFSET(0x15393D00)
#define HPKNGKFOEJD_ODPPBBAIGLF_OFFSET UNITYSDK_OFFSET(0x15393DA0)
#define HPKNGKFOEJD__CTOR_OFFSET UNITYSDK_OFFSET(0x15393C00)

inline static constexpr unsigned int HPKNGKFOEJD_TypeDefinitionIndex = 85578;

class HPKNGKFOEJD : public ::System::Object
{
public:
	::System::String* NNHECAKBENB; // 0x10
	::LGINJIKKBJA* PHDLHCELKKC; // 0x18
	::UnityEngine::Transform* LIDLOIDCBNA; // 0x20
	::System::Action_2<::System::Boolean, ::System::String*>* FBEBEHNGDPG; // 0x28
	::System::Boolean BAJEEPHHAOI; // 0x30

	::System::Void _ctor(::System::Boolean FLJPINEGKHM, ::LGINJIKKBJA* JEPEJDNMFOK, ::UnityEngine::Transform* HEEEBFPEIKE, ::System::String* NAMHCFJAMHH, ::System::Action_2<::System::Boolean, ::System::String*>* BFOMBFMONJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::LGINJIKKBJA*, ::UnityEngine::Transform*, ::System::String*, ::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + HPKNGKFOEJD__CTOR_OFFSET))(this, FLJPINEGKHM, JEPEJDNMFOK, HEEEBFPEIKE, NAMHCFJAMHH, BFOMBFMONJG);
	}

	::System::Void JPHMIGDOKKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKNGKFOEJD_JPHMIGDOKKI_OFFSET))(this);
	}

	::System::Boolean GFFICGKPLBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKNGKFOEJD_GFFICGKPLBL_OFFSET))(this);
	}

	::System::Void ODPPBBAIGLF(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKNGKFOEJD_ODPPBBAIGLF_OFFSET))(this, LIEJIGMGGOL);
	}
};
