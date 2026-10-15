#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGOFJCCAPBC;
namespace System { class Object; }

#define CGOFJCCAPBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08AF70)
#define CGOFJCCAPBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08AFB0)
#define CGOFJCCAPBC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E08AFC0)

inline static constexpr unsigned int CGOFJCCAPBC___c_TypeDefinitionIndex = 26830;

	class CGOFJCCAPBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x143B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOFJCCAPBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC___C_CTOR_OFFSET))(this);
		}

		::CGOFJCCAPBC* __cctor_b__38_0()
		{
			return ((::CGOFJCCAPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
