#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJAKGOHEGBP;
class LBJLBMOOJGM;
class PIFNFDCAFKE;

#define PIFNFDCAFKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC90A90)
#define PIFNFDCAFKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC90A80)
#define PIFNFDCAFKE_ENMEPNCHEMN_OFFSET UNITYSDK_OFFSET(0x1EC84660)

inline static constexpr unsigned int PIFNFDCAFKE_TypeDefinitionIndex = 44305;

	class PIFNFDCAFKE : public ::System::Object
	{
	public:
		static ::PIFNFDCAFKE** StaticGet_FMJPMFEDIJL()
		{
			return (::PIFNFDCAFKE**)UnitySDK::FromName("", "PIFNFDCAFKE")->GetStaticField(0x4C840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFNFDCAFKE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIFNFDCAFKE_CCTOR_OFFSET))();
		}

		::System::Void ENMEPNCHEMN(::BJAKGOHEGBP* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJAKGOHEGBP*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + PIFNFDCAFKE_ENMEPNCHEMN_OFFSET))(this, a1, a2);
		}

	};
