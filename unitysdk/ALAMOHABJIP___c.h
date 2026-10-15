#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAMOHABJIP;
namespace System { class Object; }

#define ALAMOHABJIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4B40)
#define ALAMOHABJIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A4B70)
#define ALAMOHABJIP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3A4B80)

inline static constexpr unsigned int ALAMOHABJIP___c_TypeDefinitionIndex = 30703;

	class ALAMOHABJIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x404D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAMOHABJIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP___C_CTOR_OFFSET))(this);
		}

		::ALAMOHABJIP* __cctor_b__38_0()
		{
			return ((::ALAMOHABJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAMOHABJIP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
