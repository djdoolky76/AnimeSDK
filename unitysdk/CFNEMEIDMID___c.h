#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFNEMEIDMID;
namespace System { class Object; }

#define CFNEMEIDMID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A7A30)
#define CFNEMEIDMID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A7A70)
#define CFNEMEIDMID___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0A7A80)

inline static constexpr unsigned int CFNEMEIDMID___c_TypeDefinitionIndex = 28929;

	class CFNEMEIDMID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x135E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFNEMEIDMID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID___C_CTOR_OFFSET))(this);
		}

		::CFNEMEIDMID* __cctor_b__28_0()
		{
			return ((::CFNEMEIDMID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNEMEIDMID___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
