#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAMIICJDOBO;
namespace System { class Object; }

#define CAMIICJDOBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203524A0)
#define CAMIICJDOBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203524E0)
#define CAMIICJDOBO___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x203524F0)

inline static constexpr unsigned int CAMIICJDOBO___c_TypeDefinitionIndex = 30629;

	class CAMIICJDOBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAMIICJDOBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO___C_CTOR_OFFSET))(this);
		}

		::CAMIICJDOBO* __cctor_b__32_0()
		{
			return ((::CAMIICJDOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMIICJDOBO___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
