#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEBIJAKFNLO;
namespace System { class Object; }

#define BEBIJAKFNLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F43F0)
#define BEBIJAKFNLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F4430)
#define BEBIJAKFNLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8F4440)

inline static constexpr unsigned int BEBIJAKFNLO___c_TypeDefinitionIndex = 29420;

	class BEBIJAKFNLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52E60);
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
