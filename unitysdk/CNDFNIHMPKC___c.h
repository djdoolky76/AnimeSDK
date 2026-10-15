#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNDFNIHMPKC;
namespace System { class Object; }

#define CNDFNIHMPKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E107BB0)
#define CNDFNIHMPKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E107BE0)
#define CNDFNIHMPKC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E107BF0)

inline static constexpr unsigned int CNDFNIHMPKC___c_TypeDefinitionIndex = 29028;

	class CNDFNIHMPKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNDFNIHMPKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC___C_CTOR_OFFSET))(this);
		}

		::CNDFNIHMPKC* __cctor_b__18_0()
		{
			return ((::CNDFNIHMPKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
