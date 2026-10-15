#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKFCCNOIDNB;
namespace System { class Object; }

#define MKFCCNOIDNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA29E40)
#define MKFCCNOIDNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA29E80)
#define MKFCCNOIDNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA29E90)

inline static constexpr unsigned int MKFCCNOIDNB___c_TypeDefinitionIndex = 26998;

	class MKFCCNOIDNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFCCNOIDNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB___C_CTOR_OFFSET))(this);
		}

		::MKFCCNOIDNB* __cctor_b__28_0()
		{
			return ((::MKFCCNOIDNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
