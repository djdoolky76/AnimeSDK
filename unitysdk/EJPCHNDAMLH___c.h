#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJPCHNDAMLH;
namespace System { class Object; }

#define EJPCHNDAMLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEE20)
#define EJPCHNDAMLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEE60)
#define EJPCHNDAMLH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2BEE70)

inline static constexpr unsigned int EJPCHNDAMLH___c_TypeDefinitionIndex = 27446;

	class EJPCHNDAMLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJPCHNDAMLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH___C_CTOR_OFFSET))(this);
		}

		::EJPCHNDAMLH* __cctor_b__23_0()
		{
			return ((::EJPCHNDAMLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPCHNDAMLH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
