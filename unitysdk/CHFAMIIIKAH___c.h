#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHFAMIIIKAH;
namespace System { class Object; }

#define CHFAMIIIKAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C5900)
#define CHFAMIIIKAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C5940)
#define CHFAMIIIKAH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E0C5950)

inline static constexpr unsigned int CHFAMIIIKAH___c_TypeDefinitionIndex = 33532;

	class CHFAMIIIKAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16550);
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
