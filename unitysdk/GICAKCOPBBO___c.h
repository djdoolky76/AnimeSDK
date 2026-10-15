#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GICAKCOPBBO;
namespace System { class Object; }

#define GICAKCOPBBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4929F0)
#define GICAKCOPBBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E492A30)
#define GICAKCOPBBO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E492A40)

inline static constexpr unsigned int GICAKCOPBBO___c_TypeDefinitionIndex = 34180;

	class GICAKCOPBBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x187C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GICAKCOPBBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICAKCOPBBO___C_CTOR_OFFSET))(this);
		}

		::GICAKCOPBBO* __cctor_b__48_0()
		{
			return ((::GICAKCOPBBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GICAKCOPBBO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
