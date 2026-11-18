#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class DEDPDKKOCGM;
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define AONHAICLNNE_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xF77B060)
#define AONHAICLNNE_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0xF77AFF0)
#define AONHAICLNNE_KPHODAIAEKB_OFFSET UNITYSDK_OFFSET(0xF77B1A0)
#define AONHAICLNNE_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0xF77B200)
#define AONHAICLNNE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xF77AF40)
#define AONHAICLNNE__CTOR_OFFSET UNITYSDK_OFFSET(0xF77AFE0)

inline static constexpr unsigned int AONHAICLNNE_TypeDefinitionIndex = 86551;

class AONHAICLNNE : public ::JJEJBPGJPJN
{
public:
	// static const ::System::Int32 JKFIOBKFKPN = -0x1; // 0x0
	::LJHFMILANJA_1<::System::Boolean>* EAEDDJGHAPK; // 0x88
	::LJHFMILANJA_1<::System::Int32>* GIFDJHEBLCJ; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONHAICLNNE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONHAICLNNE_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONHAICLNNE_IFDIOIOCGDP_OFFSET))(this);
	}

	::DEDPDKKOCGM* COPIDBEMEIE()
	{
		return ((::DEDPDKKOCGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONHAICLNNE_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Boolean KPHODAIAEKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONHAICLNNE_KPHODAIAEKB_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONHAICLNNE_OAJEIDFGCII_OFFSET))(this);
	}
};
