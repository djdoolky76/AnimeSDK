#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMKKEKMHNC;
namespace System { class Object; }

#define JCMKKEKMHNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7580)
#define JCMKKEKMHNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D75C0)
#define JCMKKEKMHNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6D75D0)

inline static constexpr unsigned int JCMKKEKMHNC___c_TypeDefinitionIndex = 28367;

	class JCMKKEKMHNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCMKKEKMHNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC___C_CTOR_OFFSET))(this);
		}

		::JCMKKEKMHNC* __cctor_b__23_0()
		{
			return ((::JCMKKEKMHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
