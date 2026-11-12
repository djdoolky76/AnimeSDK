#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFPCLMDMEME;
namespace System { class Object; }

#define HFPCLMDMEME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F86CAF0)
#define HFPCLMDMEME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F86CB30)
#define HFPCLMDMEME___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F86CB40)

inline static constexpr unsigned int HFPCLMDMEME___c_TypeDefinitionIndex = 34443;

	class HFPCLMDMEME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFPCLMDMEME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME___C_CTOR_OFFSET))(this);
		}

		::HFPCLMDMEME* __cctor_b__28_0()
		{
			return ((::HFPCLMDMEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
