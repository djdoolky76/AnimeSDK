#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFJOHCLDFE;
namespace System { class Object; }

#define GNFJOHCLDFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1620)
#define GNFJOHCLDFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1660)
#define GNFJOHCLDFE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4B1670)

inline static constexpr unsigned int GNFJOHCLDFE___c_TypeDefinitionIndex = 34876;

	class GNFJOHCLDFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFJOHCLDFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE___C_CTOR_OFFSET))(this);
		}

		::GNFJOHCLDFE* __cctor_b__38_0()
		{
			return ((::GNFJOHCLDFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
