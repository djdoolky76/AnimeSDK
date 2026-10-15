#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBJPOICBGMK;
namespace System { class Object; }

#define DBJPOICBGMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E131BC0)
#define DBJPOICBGMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E131C00)
#define DBJPOICBGMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E131C10)

inline static constexpr unsigned int DBJPOICBGMK___c_TypeDefinitionIndex = 27165;

	class DBJPOICBGMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBJPOICBGMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK___C_CTOR_OFFSET))(this);
		}

		::DBJPOICBGMK* __cctor_b__23_0()
		{
			return ((::DBJPOICBGMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
