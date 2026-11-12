#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDBOCKENFIM;
namespace System { class Object; }

#define HDBOCKENFIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F83EAD0)
#define HDBOCKENFIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F83EB10)
#define HDBOCKENFIM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F83EB20)

inline static constexpr unsigned int HDBOCKENFIM___c_TypeDefinitionIndex = 34828;

	class HDBOCKENFIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x266D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDBOCKENFIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM___C_CTOR_OFFSET))(this);
		}

		::HDBOCKENFIM* __cctor_b__38_0()
		{
			return ((::HDBOCKENFIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBOCKENFIM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
