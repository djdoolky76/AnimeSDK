#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMDENKICHGK;
namespace System { class Object; }

#define JMDENKICHGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78AA80)
#define JMDENKICHGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78AAC0)
#define JMDENKICHGK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E78AAD0)

inline static constexpr unsigned int JMDENKICHGK___c_TypeDefinitionIndex = 26901;

	class JMDENKICHGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDENKICHGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK___C_CTOR_OFFSET))(this);
		}

		::JMDENKICHGK* __cctor_b__23_0()
		{
			return ((::JMDENKICHGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDENKICHGK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
