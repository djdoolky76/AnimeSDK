#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAAMMAACICO;
namespace System { class Object; }

#define GAAMMAACICO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E53D0)
#define GAAMMAACICO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E5410)
#define GAAMMAACICO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3E5420)

inline static constexpr unsigned int GAAMMAACICO___c_TypeDefinitionIndex = 26267;

	class GAAMMAACICO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x602B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAMMAACICO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO___C_CTOR_OFFSET))(this);
		}

		::GAAMMAACICO* __cctor_b__28_0()
		{
			return ((::GAAMMAACICO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMMAACICO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
