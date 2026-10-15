#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IANKKDKAHPD;
namespace System { class Object; }

#define IANKKDKAHPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DD0F0)
#define IANKKDKAHPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DD120)
#define IANKKDKAHPD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5DD130)

inline static constexpr unsigned int IANKKDKAHPD___c_TypeDefinitionIndex = 33729;

	class IANKKDKAHPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x419E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANKKDKAHPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD___C_CTOR_OFFSET))(this);
		}

		::IANKKDKAHPD* __cctor_b__23_0()
		{
			return ((::IANKKDKAHPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANKKDKAHPD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
