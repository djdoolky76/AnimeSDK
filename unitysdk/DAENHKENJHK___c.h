#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAENHKENJHK;
namespace System { class Object; }

#define DAENHKENJHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F427680)
#define DAENHKENJHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4276C0)
#define DAENHKENJHK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4276D0)

inline static constexpr unsigned int DAENHKENJHK___c_TypeDefinitionIndex = 33884;

	class DAENHKENJHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAENHKENJHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK___C_CTOR_OFFSET))(this);
		}

		::DAENHKENJHK* __cctor_b__23_0()
		{
			return ((::DAENHKENJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAENHKENJHK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
