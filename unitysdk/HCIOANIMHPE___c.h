#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCIOANIMHPE;
namespace System { class Object; }

#define HCIOANIMHPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200C22A0)
#define HCIOANIMHPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200C22E0)
#define HCIOANIMHPE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x200C22F0)

inline static constexpr unsigned int HCIOANIMHPE___c_TypeDefinitionIndex = 35406;

	class HCIOANIMHPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIOANIMHPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE___C_CTOR_OFFSET))(this);
		}

		::HCIOANIMHPE* __cctor_b__18_0()
		{
			return ((::HCIOANIMHPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIOANIMHPE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
