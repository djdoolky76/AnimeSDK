#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJMPKMNINGK;
namespace System { class Object; }

#define OJMPKMNINGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5DEF0)
#define OJMPKMNINGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5DF30)
#define OJMPKMNINGK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DE5DF40)

inline static constexpr unsigned int OJMPKMNINGK___c_TypeDefinitionIndex = 25558;

	class OJMPKMNINGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJMPKMNINGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMPKMNINGK___C_CTOR_OFFSET))(this);
		}

		::OJMPKMNINGK* __cctor_b__43_0()
		{
			return ((::OJMPKMNINGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMPKMNINGK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
