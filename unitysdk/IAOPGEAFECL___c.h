#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOPGEAFECL;
namespace System { class Object; }

#define IAOPGEAFECL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F90A380)
#define IAOPGEAFECL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F90A3C0)
#define IAOPGEAFECL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F90A3D0)

inline static constexpr unsigned int IAOPGEAFECL___c_TypeDefinitionIndex = 32580;

	class IAOPGEAFECL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x473E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOPGEAFECL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL___C_CTOR_OFFSET))(this);
		}

		::IAOPGEAFECL* __cctor_b__18_0()
		{
			return ((::IAOPGEAFECL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGEAFECL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
