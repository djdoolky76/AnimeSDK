#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CONONEALNOF;
namespace System { class Object; }

#define CONONEALNOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1381B0)
#define CONONEALNOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1381F0)
#define CONONEALNOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E138200)

inline static constexpr unsigned int CONONEALNOF___c_TypeDefinitionIndex = 29187;

	class CONONEALNOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONONEALNOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF___C_CTOR_OFFSET))(this);
		}

		::CONONEALNOF* __cctor_b__28_0()
		{
			return ((::CONONEALNOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONONEALNOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
