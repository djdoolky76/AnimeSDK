#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDKGKIDCBKA;
namespace System { class Object; }

#define PDKGKIDCBKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20663760)
#define PDKGKIDCBKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206637A0)
#define PDKGKIDCBKA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206637B0)

inline static constexpr unsigned int PDKGKIDCBKA___c_TypeDefinitionIndex = 30276;

	class PDKGKIDCBKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKGKIDCBKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA___C_CTOR_OFFSET))(this);
		}

		::PDKGKIDCBKA* __cctor_b__23_0()
		{
			return ((::PDKGKIDCBKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGKIDCBKA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
