#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOPGEAFECL;
namespace System { class Object; }

#define IAOPGEAFECL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DFC30)
#define IAOPGEAFECL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DFC70)
#define IAOPGEAFECL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5DFC80)

inline static constexpr unsigned int IAOPGEAFECL___c_TypeDefinitionIndex = 31667;

	class IAOPGEAFECL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41F70);
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
