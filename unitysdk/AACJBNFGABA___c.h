#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AACJBNFGABA;
namespace System { class Object; }

#define AACJBNFGABA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203080E0)
#define AACJBNFGABA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20308120)
#define AACJBNFGABA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20308130)

inline static constexpr unsigned int AACJBNFGABA___c_TypeDefinitionIndex = 33756;

	class AACJBNFGABA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x316D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AACJBNFGABA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA___C_CTOR_OFFSET))(this);
		}

		::AACJBNFGABA* __cctor_b__23_0()
		{
			return ((::AACJBNFGABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJBNFGABA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
