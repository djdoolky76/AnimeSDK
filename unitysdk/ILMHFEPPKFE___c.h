#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILMHFEPPKFE;
namespace System { class Object; }

#define ILMHFEPPKFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2E90)
#define ILMHFEPPKFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2EC0)
#define ILMHFEPPKFE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6B2ED0)

inline static constexpr unsigned int ILMHFEPPKFE___c_TypeDefinitionIndex = 26423;

	class ILMHFEPPKFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILMHFEPPKFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMHFEPPKFE___C_CTOR_OFFSET))(this);
		}

		::ILMHFEPPKFE* __cctor_b__38_0()
		{
			return ((::ILMHFEPPKFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMHFEPPKFE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
