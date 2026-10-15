#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOJJLDAKMFL;
namespace System { class Object; }

#define FOJJLDAKMFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FDDD0)
#define FOJJLDAKMFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FDE10)
#define FOJJLDAKMFL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3FDE20)

inline static constexpr unsigned int FOJJLDAKMFL___c_TypeDefinitionIndex = 33763;

	class FOJJLDAKMFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJJLDAKMFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL___C_CTOR_OFFSET))(this);
		}

		::FOJJLDAKMFL* __cctor_b__33_0()
		{
			return ((::FOJJLDAKMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJJLDAKMFL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
