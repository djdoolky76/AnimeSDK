#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHFAMIIIKAH;
namespace System { class Object; }

#define CHFAMIIIKAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8380C0)
#define CHFAMIIIKAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F838100)
#define CHFAMIIIKAH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F838110)

inline static constexpr unsigned int CHFAMIIIKAH___c_TypeDefinitionIndex = 34447;

	class CHFAMIIIKAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFAMIIIKAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH___C_CTOR_OFFSET))(this);
		}

		::CHFAMIIIKAH* __cctor_b__43_0()
		{
			return ((::CHFAMIIIKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFAMIIIKAH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
