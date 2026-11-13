#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAGNDEHIOI.h"
class EHGIBDJKDFH;
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;

#define PFIOPFOEHJH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D81C40)
#define PFIOPFOEHJH_FIADDJLKIGB_OFFSET UNITYSDK_OFFSET(0x16D81BE0)
#define PFIOPFOEHJH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16D81B80)

inline static constexpr unsigned int PFIOPFOEHJH_TypeDefinitionIndex = 73409;

	class PFIOPFOEHJH : public ::AGAGNDEHIOI
	{
	public:
		::EHGIBDJKDFH* MAMNINMDENK; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIOPFOEHJH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIOPFOEHJH__ONBIND_OFFSET))(this);
		}

		::LEEEHNMHAAP* FIADDJLKIGB(::GIPFFGFJCBF_PBICBEEGHJO* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::GIPFFGFJCBF_PBICBEEGHJO*))((::PBYTE)hIl2Cpp + PFIOPFOEHJH_FIADDJLKIGB_OFFSET))(this, a1);
		}

	};
