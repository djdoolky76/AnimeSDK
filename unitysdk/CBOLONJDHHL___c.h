#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBOLONJDHHL;
namespace System { class Object; }

#define CBOLONJDHHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E071230)
#define CBOLONJDHHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E071260)
#define CBOLONJDHHL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E071270)

inline static constexpr unsigned int CBOLONJDHHL___c_TypeDefinitionIndex = 33297;

	class CBOLONJDHHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOLONJDHHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLONJDHHL___C_CTOR_OFFSET))(this);
		}

		::CBOLONJDHHL* __cctor_b__53_0()
		{
			return ((::CBOLONJDHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLONJDHHL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
