#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKIKIEFALC;
namespace System { class Object; }

#define HPKIKIEFALC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CEFD0)
#define HPKIKIEFALC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF010)
#define HPKIKIEFALC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5CF020)

inline static constexpr unsigned int HPKIKIEFALC___c_TypeDefinitionIndex = 32246;

	class HPKIKIEFALC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKIKIEFALC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC___C_CTOR_OFFSET))(this);
		}

		::HPKIKIEFALC* __cctor_b__23_0()
		{
			return ((::HPKIKIEFALC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
