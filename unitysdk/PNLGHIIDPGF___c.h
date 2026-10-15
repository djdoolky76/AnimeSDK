#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNLGHIIDPGF;
namespace System { class Object; }

#define PNLGHIIDPGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBCCE0)
#define PNLGHIIDPGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBCD20)
#define PNLGHIIDPGF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DFBCD30)

inline static constexpr unsigned int PNLGHIIDPGF___c_TypeDefinitionIndex = 32269;

	class PNLGHIIDPGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLGHIIDPGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF___C_CTOR_OFFSET))(this);
		}

		::PNLGHIIDPGF* __cctor_b__18_0()
		{
			return ((::PNLGHIIDPGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
