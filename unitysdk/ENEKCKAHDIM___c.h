#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEKCKAHDIM;
namespace System { class Object; }

#define ENEKCKAHDIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEE20)
#define ENEKCKAHDIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEE50)
#define ENEKCKAHDIM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2BEE60)

inline static constexpr unsigned int ENEKCKAHDIM___c_TypeDefinitionIndex = 33977;

	class ENEKCKAHDIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENEKCKAHDIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM___C_CTOR_OFFSET))(this);
		}

		::ENEKCKAHDIM* __cctor_b__28_0()
		{
			return ((::ENEKCKAHDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEKCKAHDIM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
