#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define GBPFFFGHDIM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x15701D60)
#define GBPFFFGHDIM_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x15701D30)
#define GBPFFFGHDIM_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x15701DB0)
#define GBPFFFGHDIM_CKFMFHOLDAA_OFFSET UNITYSDK_OFFSET(0x15701DD0)
#define GBPFFFGHDIM_CKGKCNCCDGK_OFFSET UNITYSDK_OFFSET(0x15701DA0)
#define GBPFFFGHDIM_DPJGFIFIKOM_OFFSET UNITYSDK_OFFSET(0x15701DE0)
#define GBPFFFGHDIM_FCEDNHNBBHB_OFFSET UNITYSDK_OFFSET(0x15701D90)
#define GBPFFFGHDIM_FPBIMKOBPIM_OFFSET UNITYSDK_OFFSET(0x15701D70)
#define GBPFFFGHDIM_KLNINNGODAB_OFFSET UNITYSDK_OFFSET(0x15701DF0)
#define GBPFFFGHDIM_LLAKKDELGIL_OFFSET UNITYSDK_OFFSET(0x15701D50)
#define GBPFFFGHDIM_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x15701D40)
#define GBPFFFGHDIM_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x15701DC0)
#define GBPFFFGHDIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15701D80)

inline static constexpr unsigned int GBPFFFGHDIM_TypeDefinitionIndex = 63231;

class GBPFFFGHDIM : public ::System::Object
{
public:
	::System::Action* _MLIBDLHKHJB_k__BackingField; // 0x10
	::System::String* _EGLGMLGIPAK_k__BackingField; // 0x18
	::System::Boolean _NOCAMJBFPGI_k__BackingField; // 0x20
	::System::Boolean _HFGDEOJLOEG_k__BackingField; // 0x21
	::System::Byte _padding0[0x2];
	::System::Int32 _JFPALPENGNB_k__BackingField; // 0x24
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM__CTOR_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Action* LLAKKDELGIL()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_LLAKKDELGIL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean FPBIMKOBPIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_FPBIMKOBPIM_OFFSET))(this);
	}

	::System::Void FCEDNHNBBHB(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_FCEDNHNBBHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CKGKCNCCDGK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_CKGKCNCCDGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDJLFIGAABO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ONFBLIJJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CKFMFHOLDAA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_CKFMFHOLDAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DPJGFIFIKOM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_DPJGFIFIKOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KLNINNGODAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFFFGHDIM_KLNINNGODAB_OFFSET))(this);
	}
};
