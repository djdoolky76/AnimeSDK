#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHDDIPACEC;
namespace System { class Object; }

#define BBHDDIPACEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA713D0)
#define BBHDDIPACEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA71410)
#define BBHDDIPACEC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA71420)

inline static constexpr unsigned int BBHDDIPACEC___c_TypeDefinitionIndex = 29722;

	class BBHDDIPACEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x448B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHDDIPACEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC___C_CTOR_OFFSET))(this);
		}

		::BBHDDIPACEC* __cctor_b__18_0()
		{
			return ((::BBHDDIPACEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
