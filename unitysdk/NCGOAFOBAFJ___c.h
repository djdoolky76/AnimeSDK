#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGOAFOBAFJ;
namespace System { class Object; }

#define NCGOAFOBAFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE1C6F0)
#define NCGOAFOBAFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1C730)
#define NCGOAFOBAFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE1C740)

inline static constexpr unsigned int NCGOAFOBAFJ___c_TypeDefinitionIndex = 30032;

	class NCGOAFOBAFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x682D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGOAFOBAFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ___C_CTOR_OFFSET))(this);
		}

		::NCGOAFOBAFJ* __cctor_b__23_0()
		{
			return ((::NCGOAFOBAFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
