#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKEBOHGDKF;
namespace System { class Object; }

#define DFKEBOHGDKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4650)
#define DFKEBOHGDKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4680)
#define DFKEBOHGDKF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1A4690)

inline static constexpr unsigned int DFKEBOHGDKF___c_TypeDefinitionIndex = 28832;

	class DFKEBOHGDKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKEBOHGDKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF___C_CTOR_OFFSET))(this);
		}

		::DFKEBOHGDKF* __cctor_b__18_0()
		{
			return ((::DFKEBOHGDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
