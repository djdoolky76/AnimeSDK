#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLNIMIPEKAB;
namespace System { class Object; }

#define OLNIMIPEKAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB690)
#define OLNIMIPEKAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAB6D0)
#define OLNIMIPEKAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEAB6E0)

inline static constexpr unsigned int OLNIMIPEKAB___c_TypeDefinitionIndex = 26165;

	class OLNIMIPEKAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNIMIPEKAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB___C_CTOR_OFFSET))(this);
		}

		::OLNIMIPEKAB* __cctor_b__33_0()
		{
			return ((::OLNIMIPEKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
