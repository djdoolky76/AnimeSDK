#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHDNPMEKPCA;
namespace System { class Object; }

#define EHDNPMEKPCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF86460)
#define EHDNPMEKPCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF86490)
#define EHDNPMEKPCA___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1FF864A0)

inline static constexpr unsigned int EHDNPMEKPCA___c_TypeDefinitionIndex = 32426;

	class EHDNPMEKPCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHDNPMEKPCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNPMEKPCA___C_CTOR_OFFSET))(this);
		}

		::EHDNPMEKPCA* __cctor_b__37_0()
		{
			return ((::EHDNPMEKPCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNPMEKPCA___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
