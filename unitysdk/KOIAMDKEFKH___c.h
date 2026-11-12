#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOIAMDKEFKH;
namespace System { class Object; }

#define KOIAMDKEFKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBEE020)
#define KOIAMDKEFKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBEE060)
#define KOIAMDKEFKH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBEE070)

inline static constexpr unsigned int KOIAMDKEFKH___c_TypeDefinitionIndex = 30124;

	class KOIAMDKEFKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIAMDKEFKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIAMDKEFKH___C_CTOR_OFFSET))(this);
		}

		::KOIAMDKEFKH* __cctor_b__33_0()
		{
			return ((::KOIAMDKEFKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIAMDKEFKH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
