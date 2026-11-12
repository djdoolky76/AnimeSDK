#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFGGMBHCKPJ;
namespace System { class Object; }

#define OFGGMBHCKPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0E9330)
#define OFGGMBHCKPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0E9370)
#define OFGGMBHCKPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0E9380)

inline static constexpr unsigned int OFGGMBHCKPJ___c_TypeDefinitionIndex = 34003;

	class OFGGMBHCKPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x125E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGGMBHCKPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ___C_CTOR_OFFSET))(this);
		}

		::OFGGMBHCKPJ* __cctor_b__28_0()
		{
			return ((::OFGGMBHCKPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
