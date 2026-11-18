#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MFIEFBBOAPH_KBIFOGCDECN_OFFSET UNITYSDK_OFFSET(0x17FC4AB0)
#define MFIEFBBOAPH_LPHDGJOMGIJ_OFFSET UNITYSDK_OFFSET(0x17FC4A90)
#define MFIEFBBOAPH_MALEOOPKNMI_OFFSET UNITYSDK_OFFSET(0x17FC4AA0)
#define MFIEFBBOAPH_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x17FC4AE0)
#define MFIEFBBOAPH_NKKFLJMCKDH_OFFSET UNITYSDK_OFFSET(0x17FC4AD0)
#define MFIEFBBOAPH_PKJMAACHLDO_OFFSET UNITYSDK_OFFSET(0x17FC4AC0)
#define MFIEFBBOAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC4A80)

inline static constexpr unsigned int MFIEFBBOAPH_TypeDefinitionIndex = 17330;

class MFIEFBBOAPH : public ::System::Object
{
public:
	::System::Byte _LOPPOOPINOI_k__BackingField; // 0x10
	::System::Byte _padding0[0x1];
	::System::UInt16 _DOOJFBONBAO_k__BackingField; // 0x12
	::System::Int32 _NAOKGJGKOBM_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFBBOAPH__CTOR_OFFSET))(this);
	}

	::System::Int32 LPHDGJOMGIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFBBOAPH_LPHDGJOMGIJ_OFFSET))(this);
	}

	::System::Void MALEOOPKNMI(::System::Byte EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MFIEFBBOAPH_MALEOOPKNMI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KBIFOGCDECN(::System::UInt16 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + MFIEFBBOAPH_KBIFOGCDECN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt16 PKJMAACHLDO()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFBBOAPH_PKJMAACHLDO_OFFSET))(this);
	}

	::System::Void NKKFLJMCKDH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFIEFBBOAPH_NKKFLJMCKDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Byte NGFKBKCFPLK()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFBBOAPH_NGFKBKCFPLK_OFFSET))(this);
	}
};
