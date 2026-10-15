#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DADCLCMLNNF_PlayState.h"
#include "unitysdk/System/Object.h"

#define DADCLCMLNNF_AMAGOIDAMII_OFFSET UNITYSDK_OFFSET(0xDFC0D30)
#define DADCLCMLNNF_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC0F70)
#define DADCLCMLNNF_DDBGEGEBACP_OFFSET UNITYSDK_OFFSET(0xDFC0F20)
#define DADCLCMLNNF_DNCAAIPBOBA_OFFSET UNITYSDK_OFFSET(0xDFC0E80)
#define DADCLCMLNNF_IEKEHBFEBPB_OFFSET UNITYSDK_OFFSET(0xDFC0C90)
#define DADCLCMLNNF_IOBMOBEFPNB_OFFSET UNITYSDK_OFFSET(0xDFC0ED0)
#define DADCLCMLNNF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDFC0C40)
#define DADCLCMLNNF_KPLOMJMJDMA_OFFSET UNITYSDK_OFFSET(0xDFC0CE0)
#define DADCLCMLNNF_LKCOKDKCKHB_OFFSET UNITYSDK_OFFSET(0xDFC0DB0)
#define DADCLCMLNNF_OACODPGFNLC_OFFSET UNITYSDK_OFFSET(0xDFC0E00)

	class DADCLCMLNNF : public ::System::Object
	{
	public:
		::DADCLCMLNNF_PlayState CNAPOOPIAAI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void IEKEHBFEBPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_IEKEHBFEBPB_OFFSET))(this);
		}

		::System::Void KPLOMJMJDMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_KPLOMJMJDMA_OFFSET))(this);
		}

		::System::Void AMAGOIDAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_AMAGOIDAMII_OFFSET))(this);
		}

		::System::Void OACODPGFNLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_OACODPGFNLC_OFFSET))(this);
		}

		::System::Boolean LKCOKDKCKHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_LKCOKDKCKHB_OFFSET))(this);
		}

		::System::Boolean DNCAAIPBOBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_DNCAAIPBOBA_OFFSET))(this);
		}

		::System::Boolean IOBMOBEFPNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_IOBMOBEFPNB_OFFSET))(this);
		}

		::System::Boolean DDBGEGEBACP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCLCMLNNF_DDBGEGEBACP_OFFSET))(this);
		}

	};
