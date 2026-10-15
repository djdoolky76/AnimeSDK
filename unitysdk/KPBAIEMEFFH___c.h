#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPBAIEMEFFH;
namespace System { class Object; }

#define KPBAIEMEFFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E887E60)
#define KPBAIEMEFFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E887E90)
#define KPBAIEMEFFH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E887EA0)

inline static constexpr unsigned int KPBAIEMEFFH___c_TypeDefinitionIndex = 26227;

	class KPBAIEMEFFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBAIEMEFFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH___C_CTOR_OFFSET))(this);
		}

		::KPBAIEMEFFH* __cctor_b__48_0()
		{
			return ((::KPBAIEMEFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBAIEMEFFH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
