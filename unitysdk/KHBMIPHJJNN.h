#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define KHBMIPHJJNN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15B8C950)
#define KHBMIPHJJNN_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x15B8C8C0)
#define KHBMIPHJJNN_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x15B8C7E0)
#define KHBMIPHJJNN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8C8B0)

inline static constexpr unsigned int KHBMIPHJJNN_TypeDefinitionIndex = 68918;

class KHBMIPHJJNN : public ::LICBHCFJLNF
{
public:
	::System::Boolean PEDANHBGIGE; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single JEAFAAKONAI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBMIPHJJNN__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBMIPHJJNN_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::KHBMIPHJJNN* BBPCBEEHALC()
	{
		return ((::KHBMIPHJJNN*(*)())((::PBYTE)hIl2Cpp + KHBMIPHJJNN_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBMIPHJJNN_ANEOCOIFDDJ_OFFSET))(this);
	}
};
