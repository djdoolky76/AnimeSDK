#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMPOLBBFNA;
namespace System { class Object; }

#define MJMPOLBBFNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA1970)
#define MJMPOLBBFNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA19B0)
#define MJMPOLBBFNA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDA19C0)

inline static constexpr unsigned int MJMPOLBBFNA___c_TypeDefinitionIndex = 35693;

	class MJMPOLBBFNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMPOLBBFNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA___C_CTOR_OFFSET))(this);
		}

		::MJMPOLBBFNA* __cctor_b__23_0()
		{
			return ((::MJMPOLBBFNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMPOLBBFNA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
