#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKKGNFMKL;
namespace System { class Object; }

#define CGBKKGNFMKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07E090)
#define CGBKKGNFMKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07E0D0)
#define CGBKKGNFMKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E07E0E0)

inline static constexpr unsigned int CGBKKGNFMKL___c_TypeDefinitionIndex = 29453;

	class CGBKKGNFMKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBKKGNFMKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKGNFMKL___C_CTOR_OFFSET))(this);
		}

		::CGBKKGNFMKL* __cctor_b__23_0()
		{
			return ((::CGBKKGNFMKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKKGNFMKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
