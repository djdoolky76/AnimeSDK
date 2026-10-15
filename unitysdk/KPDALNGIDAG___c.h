#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDALNGIDAG;
namespace System { class Object; }

#define KPDALNGIDAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BA690)
#define KPDALNGIDAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BA6D0)
#define KPDALNGIDAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8BA6E0)

inline static constexpr unsigned int KPDALNGIDAG___c_TypeDefinitionIndex = 32889;

	class KPDALNGIDAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDALNGIDAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG___C_CTOR_OFFSET))(this);
		}

		::KPDALNGIDAG* __cctor_b__23_0()
		{
			return ((::KPDALNGIDAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
