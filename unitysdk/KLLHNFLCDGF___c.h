#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLLHNFLCDGF;
namespace System { class Object; }

#define KLLHNFLCDGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBFA80)
#define KLLHNFLCDGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBFAC0)
#define KLLHNFLCDGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDBFAD0)

inline static constexpr unsigned int KLLHNFLCDGF___c_TypeDefinitionIndex = 30410;

	class KLLHNFLCDGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLLHNFLCDGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF___C_CTOR_OFFSET))(this);
		}

		::KLLHNFLCDGF* __cctor_b__23_0()
		{
			return ((::KLLHNFLCDGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLHNFLCDGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
