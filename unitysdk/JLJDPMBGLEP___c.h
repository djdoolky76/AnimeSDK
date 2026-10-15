#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJDPMBGLEP;
namespace System { class Object; }

#define JLJDPMBGLEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77CF30)
#define JLJDPMBGLEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77CF60)
#define JLJDPMBGLEP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E77CF70)

inline static constexpr unsigned int JLJDPMBGLEP___c_TypeDefinitionIndex = 34941;

	class JLJDPMBGLEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x697E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJDPMBGLEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP___C_CTOR_OFFSET))(this);
		}

		::JLJDPMBGLEP* __cctor_b__38_0()
		{
			return ((::JLJDPMBGLEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJDPMBGLEP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
