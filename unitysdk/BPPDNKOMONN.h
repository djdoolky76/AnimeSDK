#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIPMCIMFHME.h"
#include "unitysdk/System/Object.h"

#define BPPDNKOMONN_DEBFJCAMNGL_OFFSET UNITYSDK_OFFSET(0x1458E1D0)
#define BPPDNKOMONN_GELEGEMDIOM_OFFSET UNITYSDK_OFFSET(0x1458E220)
#define BPPDNKOMONN_PBKHLCHHJNA_OFFSET UNITYSDK_OFFSET(0x1458E180)

inline static constexpr unsigned int BPPDNKOMONN_TypeDefinitionIndex = 83656;

class BPPDNKOMONN : public ::System::Object
{
public:
	static ::System::Boolean PBKHLCHHJNA(::LIPMCIMFHME MHGFKGMMKJJ)
	{
		return ((::System::Boolean(*)(::LIPMCIMFHME))((::PBYTE)hIl2Cpp + BPPDNKOMONN_PBKHLCHHJNA_OFFSET))(MHGFKGMMKJJ);
	}

	static ::System::Boolean DEBFJCAMNGL(::LIPMCIMFHME MHGFKGMMKJJ)
	{
		return ((::System::Boolean(*)(::LIPMCIMFHME))((::PBYTE)hIl2Cpp + BPPDNKOMONN_DEBFJCAMNGL_OFFSET))(MHGFKGMMKJJ);
	}

	static ::System::Boolean GELEGEMDIOM(::LIPMCIMFHME MHGFKGMMKJJ)
	{
		return ((::System::Boolean(*)(::LIPMCIMFHME))((::PBYTE)hIl2Cpp + BPPDNKOMONN_GELEGEMDIOM_OFFSET))(MHGFKGMMKJJ);
	}
};
