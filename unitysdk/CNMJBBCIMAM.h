#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJOBHMEEIH;
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define CNMJBBCIMAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC67010)
#define CNMJBBCIMAM_JMPCNFIGLBK_OFFSET UNITYSDK_OFFSET(0x1EC66BA0)

	class CNMJBBCIMAM : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_IMFLPKHBNEO()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("", "CNMJBBCIMAM")->GetStaticField(0x4A440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNMJBBCIMAM_CCTOR_OFFSET))();
		}

		static ::System::Void JMPCNFIGLBK(::BOJOBHMEEIH* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::BOJOBHMEEIH*, ::System::Object*))((::PBYTE)hIl2Cpp + CNMJBBCIMAM_JMPCNFIGLBK_OFFSET))(a1, a2);
		}

	};
