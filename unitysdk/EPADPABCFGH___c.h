#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
namespace System { class Object; }

#define EPADPABCFGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3F30)
#define EPADPABCFGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3F70)
#define EPADPABCFGH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2D3F80)

inline static constexpr unsigned int EPADPABCFGH___c_TypeDefinitionIndex = 31653;

	class EPADPABCFGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x477B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPADPABCFGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH___C_CTOR_OFFSET))(this);
		}

		::EPADPABCFGH* __cctor_b__33_0()
		{
			return ((::EPADPABCFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
