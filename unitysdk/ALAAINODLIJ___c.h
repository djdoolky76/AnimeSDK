#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAAINODLIJ;
namespace System { class Object; }

#define ALAAINODLIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F68EDA0)
#define ALAAINODLIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F68EDE0)
#define ALAAINODLIJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F68EDF0)

inline static constexpr unsigned int ALAAINODLIJ___c_TypeDefinitionIndex = 34415;

	class ALAAINODLIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAAINODLIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ___C_CTOR_OFFSET))(this);
		}

		::ALAAINODLIJ* __cctor_b__18_0()
		{
			return ((::ALAAINODLIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
