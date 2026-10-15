#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKCBFFIOBAB;
namespace System { class Object; }

#define MKCBFFIOBAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA24E90)
#define MKCBFFIOBAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA24ED0)
#define MKCBFFIOBAB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA24EE0)

inline static constexpr unsigned int MKCBFFIOBAB___c_TypeDefinitionIndex = 34116;

	class MKCBFFIOBAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x542E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCBFFIOBAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB___C_CTOR_OFFSET))(this);
		}

		::MKCBFFIOBAB* __cctor_b__38_0()
		{
			return ((::MKCBFFIOBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCBFFIOBAB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
