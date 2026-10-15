#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDPHOLLGPKE;
namespace System { class Object; }

#define LDPHOLLGPKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5CC0)
#define LDPHOLLGPKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5D00)
#define LDPHOLLGPKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8D5D10)

inline static constexpr unsigned int LDPHOLLGPKE___c_TypeDefinitionIndex = 30475;

	class LDPHOLLGPKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDPHOLLGPKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE___C_CTOR_OFFSET))(this);
		}

		::LDPHOLLGPKE* __cctor_b__33_0()
		{
			return ((::LDPHOLLGPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPHOLLGPKE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
