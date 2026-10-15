#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILGDFJMKOEC;
namespace System { class Object; }

#define ILGDFJMKOEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67FD10)
#define ILGDFJMKOEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67FD50)
#define ILGDFJMKOEC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E67FD60)

inline static constexpr unsigned int ILGDFJMKOEC___c_TypeDefinitionIndex = 31068;

	class ILGDFJMKOEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGDFJMKOEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC___C_CTOR_OFFSET))(this);
		}

		::ILGDFJMKOEC* __cctor_b__43_0()
		{
			return ((::ILGDFJMKOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
