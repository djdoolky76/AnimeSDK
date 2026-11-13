#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DADCLCMLNNF_PlayState.h"
#include "unitysdk/System/Object.h"

#define DADCLCMLNNF_AMAGOIDAMII_OFFSET UNITYSDK_OFFSET(0x19942070)
#define DADCLCMLNNF_CTOR_OFFSET UNITYSDK_OFFSET(0x199422B0)
#define DADCLCMLNNF_DDBGEGEBACP_OFFSET UNITYSDK_OFFSET(0x19942260)
#define DADCLCMLNNF_DNCAAIPBOBA_OFFSET UNITYSDK_OFFSET(0x199421C0)
#define DADCLCMLNNF_IEKEHBFEBPB_OFFSET UNITYSDK_OFFSET(0x19941FD0)
#define DADCLCMLNNF_IOBMOBEFPNB_OFFSET UNITYSDK_OFFSET(0x19942210)
#define DADCLCMLNNF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x19941F80)
#define DADCLCMLNNF_KPLOMJMJDMA_OFFSET UNITYSDK_OFFSET(0x19942020)
#define DADCLCMLNNF_LKCOKDKCKHB_OFFSET UNITYSDK_OFFSET(0x199420F0)
#define DADCLCMLNNF_OACODPGFNLC_OFFSET UNITYSDK_OFFSET(0x19942140)

inline static constexpr unsigned int DADCLCMLNNF_TypeDefinitionIndex = 73324;

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
