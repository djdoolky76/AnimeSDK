#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBDAKMLDMC;
namespace System { class Object; }

#define PKBDAKMLDMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF85FD0)
#define PKBDAKMLDMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF86010)
#define PKBDAKMLDMC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF86020)

inline static constexpr unsigned int PKBDAKMLDMC___c_TypeDefinitionIndex = 28779;

	class PKBDAKMLDMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBDAKMLDMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC___C_CTOR_OFFSET))(this);
		}

		::PKBDAKMLDMC* __cctor_b__38_0()
		{
			return ((::PKBDAKMLDMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
