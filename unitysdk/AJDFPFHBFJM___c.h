#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDFPFHBFJM;
namespace System { class Object; }

#define AJDFPFHBFJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BFB50)
#define AJDFPFHBFJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BFB90)
#define AJDFPFHBFJM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3BFBA0)

inline static constexpr unsigned int AJDFPFHBFJM___c_TypeDefinitionIndex = 29540;

	class AJDFPFHBFJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDFPFHBFJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM___C_CTOR_OFFSET))(this);
		}

		::AJDFPFHBFJM* __cctor_b__18_0()
		{
			return ((::AJDFPFHBFJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDFPFHBFJM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
