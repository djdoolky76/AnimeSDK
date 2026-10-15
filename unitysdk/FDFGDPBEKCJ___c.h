#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFGDPBEKCJ;
namespace System { class Object; }

#define FDFGDPBEKCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E355200)
#define FDFGDPBEKCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E355230)
#define FDFGDPBEKCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E355240)

inline static constexpr unsigned int FDFGDPBEKCJ___c_TypeDefinitionIndex = 33237;

	class FDFGDPBEKCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFGDPBEKCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ___C_CTOR_OFFSET))(this);
		}

		::FDFGDPBEKCJ* __cctor_b__23_0()
		{
			return ((::FDFGDPBEKCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGDPBEKCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
