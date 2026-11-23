#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FD9A820EFCCCAA73_A750ECEEE3BFDFE9_OFFSET UNITYSDK_OFFSET(0x2328E30)
#define FD9A820EFCCCAA73_A9B3C38CFE434AD4_OFFSET UNITYSDK_OFFSET(0x2328F30)
#define FD9A820EFCCCAA73_B5882AC0EF5E308F_OFFSET UNITYSDK_OFFSET(0x2328CB0)
#define FD9A820EFCCCAA73_E652792BE0121CE9_OFFSET UNITYSDK_OFFSET(0x2329030)

inline static constexpr unsigned int FD9A820EFCCCAA73_TypeDefinitionIndex = 2344;

class FD9A820EFCCCAA73 : public ::System::Object
{
public:
	static ::System::String* B5882AC0EF5E308F(::System::String* F85255D66D3D00B2)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FD9A820EFCCCAA73_B5882AC0EF5E308F_OFFSET))(F85255D66D3D00B2);
	}

	static ::System::String* A9B3C38CFE434AD4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FD9A820EFCCCAA73_A9B3C38CFE434AD4_OFFSET))();
	}

	static ::System::String* E652792BE0121CE9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FD9A820EFCCCAA73_E652792BE0121CE9_OFFSET))();
	}

	static ::System::String* A750ECEEE3BFDFE9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FD9A820EFCCCAA73_A750ECEEE3BFDFE9_OFFSET))();
	}
};
