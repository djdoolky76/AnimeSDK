#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGBNGJFCMG;
namespace System { class Object; }

#define DAGBNGJFCMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E123480)
#define DAGBNGJFCMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1234B0)
#define DAGBNGJFCMG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1234C0)

inline static constexpr unsigned int DAGBNGJFCMG___c_TypeDefinitionIndex = 33957;

	class DAGBNGJFCMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGBNGJFCMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGBNGJFCMG___C_CTOR_OFFSET))(this);
		}

		::DAGBNGJFCMG* __cctor_b__38_0()
		{
			return ((::DAGBNGJFCMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGBNGJFCMG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
