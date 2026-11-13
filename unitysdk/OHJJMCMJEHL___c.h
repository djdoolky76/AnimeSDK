#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHJJMCMJEHL;
namespace System { class Object; }

#define OHJJMCMJEHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE2A80)
#define OHJJMCMJEHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE2AB0)
#define OHJJMCMJEHL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FCE2AC0)

inline static constexpr unsigned int OHJJMCMJEHL___c_TypeDefinitionIndex = 34072;

	class OHJJMCMJEHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHJJMCMJEHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL___C_CTOR_OFFSET))(this);
		}

		::OHJJMCMJEHL* __cctor_b__43_0()
		{
			return ((::OHJJMCMJEHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJJMCMJEHL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
