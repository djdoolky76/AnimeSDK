#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHDGCBLPGD;
namespace System { class Object; }

#define PNHDGCBLPGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F26C420)
#define PNHDGCBLPGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F26C460)
#define PNHDGCBLPGD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F26C470)

inline static constexpr unsigned int PNHDGCBLPGD___c_TypeDefinitionIndex = 30161;

	class PNHDGCBLPGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42FE0);
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
