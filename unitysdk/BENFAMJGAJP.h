#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BENFAMJGAJP_CKLOHFEAFAD_OFFSET UNITYSDK_OFFSET(0xB159500)
#define BENFAMJGAJP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB1593F0)
#define BENFAMJGAJP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1593E0)
#define BENFAMJGAJP_ELMMCGBHHFM_OFFSET UNITYSDK_OFFSET(0xB159540)
#define BENFAMJGAJP_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xB1595F0)
#define BENFAMJGAJP_IKAMLODNCHJ_OFFSET UNITYSDK_OFFSET(0xB1594B0)
#define BENFAMJGAJP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB159440)
#define BENFAMJGAJP_KKIGIGILMHB_OFFSET UNITYSDK_OFFSET(0xB159590)
#define BENFAMJGAJP_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xB159600)

	class BENFAMJGAJP : public ::System::Object
	{
	public:
		::System::Boolean _IsLoaded_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 KHNNFPPOMCL; // 0x14
		::System::Single FAKLOJOHHHN; // 0x18
		// static const ::System::Object JOPMBBDFFPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_CLEAR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BENFAMJGAJP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IKAMLODNCHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_IKAMLODNCHJ_OFFSET))(this);
		}

		::System::Void CKLOHFEAFAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_CKLOHFEAFAD_OFFSET))(this);
		}

		::System::Void ELMMCGBHHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_ELMMCGBHHFM_OFFSET))(this);
		}

		::System::Boolean KKIGIGILMHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_KKIGIGILMHB_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BENFAMJGAJP_GET_ISLOADED_OFFSET))(this);
		}

		::System::Void set_IsLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BENFAMJGAJP_SET_ISLOADED_OFFSET))(this, a1);
		}

	};
