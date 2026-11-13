#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNPLNLCKAMJ;
namespace System { class Object; }

#define PNPLNLCKAMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCB82C0)
#define PNPLNLCKAMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB8300)
#define PNPLNLCKAMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCB8310)

inline static constexpr unsigned int PNPLNLCKAMJ___c_TypeDefinitionIndex = 35286;

	class PNPLNLCKAMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNPLNLCKAMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ___C_CTOR_OFFSET))(this);
		}

		::PNPLNLCKAMJ* __cctor_b__23_0()
		{
			return ((::PNPLNLCKAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
