#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHDGCBLPGD;
namespace System { class Object; }

#define PNHDGCBLPGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBAF20)
#define PNHDGCBLPGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBAF60)
#define PNHDGCBLPGD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFBAF70)

inline static constexpr unsigned int PNHDGCBLPGD___c_TypeDefinitionIndex = 29439;

	class PNHDGCBLPGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHDGCBLPGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD___C_CTOR_OFFSET))(this);
		}

		::PNHDGCBLPGD* __cctor_b__23_0()
		{
			return ((::PNHDGCBLPGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
