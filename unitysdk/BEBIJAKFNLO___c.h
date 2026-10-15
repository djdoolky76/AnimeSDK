#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEBIJAKFNLO;
namespace System { class Object; }

#define BEBIJAKFNLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E921A00)
#define BEBIJAKFNLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E921A40)
#define BEBIJAKFNLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E921A50)

	class BEBIJAKFNLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEBIJAKFNLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIJAKFNLO___C_CTOR_OFFSET))(this);
		}

		::BEBIJAKFNLO* __cctor_b__23_0()
		{
			return ((::BEBIJAKFNLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIJAKFNLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
