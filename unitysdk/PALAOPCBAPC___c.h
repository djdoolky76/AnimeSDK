#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PALAOPCBAPC;
namespace System { class Object; }

#define PALAOPCBAPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2C80)
#define PALAOPCBAPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2CC0)
#define PALAOPCBAPC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEC2CD0)

inline static constexpr unsigned int PALAOPCBAPC___c_TypeDefinitionIndex = 33773;

	class PALAOPCBAPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALAOPCBAPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC___C_CTOR_OFFSET))(this);
		}

		::PALAOPCBAPC* __cctor_b__28_0()
		{
			return ((::PALAOPCBAPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
