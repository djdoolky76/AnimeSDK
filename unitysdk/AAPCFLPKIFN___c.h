#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAPCFLPKIFN;
namespace System { class Object; }

#define AAPCFLPKIFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC7900)
#define AAPCFLPKIFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC7930)
#define AAPCFLPKIFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EFC7940)

inline static constexpr unsigned int AAPCFLPKIFN___c_TypeDefinitionIndex = 35996;

	class AAPCFLPKIFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPCFLPKIFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN___C_CTOR_OFFSET))(this);
		}

		::AAPCFLPKIFN* __cctor_b__28_0()
		{
			return ((::AAPCFLPKIFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCFLPKIFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
