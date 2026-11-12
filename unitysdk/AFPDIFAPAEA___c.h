#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPDIFAPAEA;
namespace System { class Object; }

#define AFPDIFAPAEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E1450)
#define AFPDIFAPAEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E1490)
#define AFPDIFAPAEA___C___CCTOR_B__193_0_OFFSET UNITYSDK_OFFSET(0x1F3E14A0)

inline static constexpr unsigned int AFPDIFAPAEA___c_TypeDefinitionIndex = 30327;

	class AFPDIFAPAEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPDIFAPAEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPDIFAPAEA___C_CTOR_OFFSET))(this);
		}

		::AFPDIFAPAEA* __cctor_b__193_0()
		{
			return ((::AFPDIFAPAEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPDIFAPAEA___C___CCTOR_B__193_0_OFFSET))(this);
		}

	};
