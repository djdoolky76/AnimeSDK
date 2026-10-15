#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class GLLIPCNMDBO;
class HGJFHGEPFPP;
class JMPDHEIBHPL;

#define JMPDHEIBHPL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB26DC30)
#define JMPDHEIBHPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB26DC20)
#define JMPDHEIBHPL_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB26DA40)

inline static constexpr unsigned int JMPDHEIBHPL_TypeDefinitionIndex = 77297;

	class JMPDHEIBHPL : public ::System::Object
	{
	public:
		static ::JMPDHEIBHPL** StaticGet_FMJPMFEDIJL()
		{
			return (::JMPDHEIBHPL**)UnitySDK::FromName("", "JMPDHEIBHPL")->GetStaticField(0x20D10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPDHEIBHPL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPDHEIBHPL_CCTOR_OFFSET))();
		}

		::System::Boolean JJNFOPNOPBF(::HGJFHGEPFPP* a1, ::GLLIPCNMDBO* a2, ::BCLKDMAHONE* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGJFHGEPFPP*, ::GLLIPCNMDBO*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + JMPDHEIBHPL_JJNFOPNOPBF_OFFSET))(this, a1, a2, a3);
		}

	};
