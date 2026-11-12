#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class EBMOBIGHCLP;
class GLLIPCNMDBO;
class HGJFHGEPFPP;

#define EBMOBIGHCLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB5000)
#define EBMOBIGHCLP_CTOR_OFFSET UNITYSDK_OFFSET(0x13AB4FF0)
#define EBMOBIGHCLP_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x13AB4F70)

inline static constexpr unsigned int EBMOBIGHCLP_TypeDefinitionIndex = 79631;

	class EBMOBIGHCLP : public ::System::Object
	{
	public:
		static ::EBMOBIGHCLP** StaticGet_FMJPMFEDIJL()
		{
			return (::EBMOBIGHCLP**)UnitySDK::FromName("", "EBMOBIGHCLP")->GetStaticField(0x65D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMOBIGHCLP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMOBIGHCLP_CCTOR_OFFSET))();
		}

		::System::Boolean JJNFOPNOPBF(::HGJFHGEPFPP* a1, ::GLLIPCNMDBO* a2, ::BCLKDMAHONE* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGJFHGEPFPP*, ::GLLIPCNMDBO*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + EBMOBIGHCLP_JJNFOPNOPBF_OFFSET))(this, a1, a2, a3);
		}

	};
