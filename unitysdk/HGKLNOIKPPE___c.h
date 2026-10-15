#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGKLNOIKPPE;
namespace System { class Object; }

#define HGKLNOIKPPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54F960)
#define HGKLNOIKPPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54F990)
#define HGKLNOIKPPE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E54F9A0)

inline static constexpr unsigned int HGKLNOIKPPE___c_TypeDefinitionIndex = 30093;

	class HGKLNOIKPPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKLNOIKPPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE___C_CTOR_OFFSET))(this);
		}

		::HGKLNOIKPPE* __cctor_b__18_0()
		{
			return ((::HGKLNOIKPPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKLNOIKPPE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
