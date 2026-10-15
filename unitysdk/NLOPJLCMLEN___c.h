#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLOPJLCMLEN;
namespace System { class Object; }

#define NLOPJLCMLEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB69D50)
#define NLOPJLCMLEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB69D90)
#define NLOPJLCMLEN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB69DA0)

inline static constexpr unsigned int NLOPJLCMLEN___c_TypeDefinitionIndex = 31259;

	class NLOPJLCMLEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLOPJLCMLEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN___C_CTOR_OFFSET))(this);
		}

		::NLOPJLCMLEN* __cctor_b__18_0()
		{
			return ((::NLOPJLCMLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
