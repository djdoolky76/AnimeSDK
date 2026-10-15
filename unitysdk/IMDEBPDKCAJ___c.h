#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMDEBPDKCAJ;
namespace System { class Object; }

#define IMDEBPDKCAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5220)
#define IMDEBPDKCAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5260)
#define IMDEBPDKCAJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6B5270)

inline static constexpr unsigned int IMDEBPDKCAJ___c_TypeDefinitionIndex = 26664;

	class IMDEBPDKCAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMDEBPDKCAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ___C_CTOR_OFFSET))(this);
		}

		::IMDEBPDKCAJ* __cctor_b__28_0()
		{
			return ((::IMDEBPDKCAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDEBPDKCAJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
