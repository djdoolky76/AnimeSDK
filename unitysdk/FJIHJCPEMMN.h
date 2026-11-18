#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PDJIKBNKJDI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJIHJCPEMMN_HAHHHJPGHPJ_OFFSET UNITYSDK_OFFSET(0x116B65B0)
#define FJIHJCPEMMN_LPDECIMPMBB_OFFSET UNITYSDK_OFFSET(0x116B6460)
#define FJIHJCPEMMN_OJNNECCKBMM_OFFSET UNITYSDK_OFFSET(0x116B6400)
#define FJIHJCPEMMN__CTOR_OFFSET UNITYSDK_OFFSET(0x116B63F0)

inline static constexpr unsigned int FJIHJCPEMMN_TypeDefinitionIndex = 65426;

class FJIHJCPEMMN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PDJIKBNKJDI*>* PAALGICAION; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCPEMMN__CTOR_OFFSET))(this);
	}

	::System::Void OJNNECCKBMM(::System::UInt32 MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJIHJCPEMMN_OJNNECCKBMM_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void LPDECIMPMBB(::System::UInt32 MCOHLHMKLIP, ::PDJIKBNKJDI* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PDJIKBNKJDI*))((::PBYTE)hIl2Cpp + FJIHJCPEMMN_LPDECIMPMBB_OFFSET))(this, MCOHLHMKLIP, IPMMCGDMODG);
	}

	::System::Void HAHHHJPGHPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCPEMMN_HAHHHJPGHPJ_OFFSET))(this);
	}
};
