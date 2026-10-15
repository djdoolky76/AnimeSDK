#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDCDKDFCOMF;

#define GDCDKDFCOMF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159942C0)
#define GDCDKDFCOMF_CTOR_OFFSET UNITYSDK_OFFSET(0x15994350)
#define GDCDKDFCOMF_GET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x159942A0)
#define GDCDKDFCOMF_GET_GAINDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994280)
#define GDCDKDFCOMF_GET_LASTDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x15994260)
#define GDCDKDFCOMF_GET_LASTTOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994240)
#define GDCDKDFCOMF_SET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x159942B0)
#define GDCDKDFCOMF_SET_GAINDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994290)
#define GDCDKDFCOMF_SET_LASTDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x15994270)
#define GDCDKDFCOMF_SET_LASTTOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994250)

	class GDCDKDFCOMF : public ::System::Object
	{
	public:
		::System::UInt32 _LastTotalDesignExp_k__BackingField; // 0x10
		::System::UInt32 _GainDesignExp_k__BackingField; // 0x14
		::System::UInt32 _LastDesignLevel_k__BackingField; // 0x18
		::System::UInt32 _CurDesignLevel_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_LastTotalDesignExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_GET_LASTTOTALDESIGNEXP_OFFSET))(this);
		}

		::System::Void set_LastTotalDesignExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_SET_LASTTOTALDESIGNEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastDesignLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_GET_LASTDESIGNLEVEL_OFFSET))(this);
		}

		::System::Void set_LastDesignLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_SET_LASTDESIGNLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_GainDesignExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_GET_GAINDESIGNEXP_OFFSET))(this);
		}

		::System::Void set_GainDesignExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_SET_GAINDESIGNEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurDesignLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_GET_CURDESIGNLEVEL_OFFSET))(this);
		}

		::System::Void set_CurDesignLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_SET_CURDESIGNLEVEL_OFFSET))(this, a1);
		}

		static ::GDCDKDFCOMF* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::GDCDKDFCOMF*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCDKDFCOMF_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

	};
