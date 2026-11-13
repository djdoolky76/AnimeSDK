#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDALNGIDAG;
namespace System { class Object; }

#define KPDALNGIDAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205B9710)
#define KPDALNGIDAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205B9750)
#define KPDALNGIDAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205B9760)

inline static constexpr unsigned int KPDALNGIDAG___c_TypeDefinitionIndex = 33804;

	class KPDALNGIDAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21BF0);
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
