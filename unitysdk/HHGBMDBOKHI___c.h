#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHGBMDBOKHI;
namespace System { class Object; }

#define HHGBMDBOKHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55A4C0)
#define HHGBMDBOKHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55A500)
#define HHGBMDBOKHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E55A510)

inline static constexpr unsigned int HHGBMDBOKHI___c_TypeDefinitionIndex = 26828;

	class HHGBMDBOKHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHGBMDBOKHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI___C_CTOR_OFFSET))(this);
		}

		::HHGBMDBOKHI* __cctor_b__23_0()
		{
			return ((::HHGBMDBOKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGBMDBOKHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
