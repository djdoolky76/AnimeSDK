#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLDPJEILCDB;
namespace System { class Object; }

#define DLDPJEILCDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E3E60)
#define DLDPJEILCDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E3EA0)
#define DLDPJEILCDB___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1E1E3EB0)

inline static constexpr unsigned int DLDPJEILCDB___c_TypeDefinitionIndex = 27689;

	class DLDPJEILCDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLDPJEILCDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDPJEILCDB___C_CTOR_OFFSET))(this);
		}

		::DLDPJEILCDB* __cctor_b__103_0()
		{
			return ((::DLDPJEILCDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDPJEILCDB___C___CCTOR_B__103_0_OFFSET))(this);
		}

	};
