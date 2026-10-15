#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDLIDAKBKMK;
namespace System { class Object; }

#define EDLIDAKBKMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E262A60)
#define EDLIDAKBKMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E262AA0)
#define EDLIDAKBKMK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E262AB0)

inline static constexpr unsigned int EDLIDAKBKMK___c_TypeDefinitionIndex = 27681;

	class EDLIDAKBKMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDLIDAKBKMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK___C_CTOR_OFFSET))(this);
		}

		::EDLIDAKBKMK* __cctor_b__38_0()
		{
			return ((::EDLIDAKBKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLIDAKBKMK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
