#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIHJENNBEE.h"
#include "unitysdk/System/Object.h"
class HNLKNLJBHDD;

#define GDOLJMIMGBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C635CF0)
#define GDOLJMIMGBI_GPNNGBFGCAD_OFFSET UNITYSDK_OFFSET(0x1C635790)
#define GDOLJMIMGBI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C635660)
#define GDOLJMIMGBI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1C634A40)

inline static constexpr unsigned int GDOLJMIMGBI_TypeDefinitionIndex = 37138;

	class GDOLJMIMGBI : public ::System::Object
	{
	public:
		::LDIHJENNBEE EEFMDEHLLFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOLJMIMGBI_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::LDIHJENNBEE a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE))((::PBYTE)hIl2Cpp + GDOLJMIMGBI_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOLJMIMGBI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GPNNGBFGCAD(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + GDOLJMIMGBI_GPNNGBFGCAD_OFFSET))(this, a1);
		}

	};
