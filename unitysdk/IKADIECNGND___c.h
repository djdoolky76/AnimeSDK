#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKADIECNGND;
namespace System { class Object; }

#define IKADIECNGND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200600F0)
#define IKADIECNGND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20060120)
#define IKADIECNGND___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x20060130)

inline static constexpr unsigned int IKADIECNGND___c_TypeDefinitionIndex = 32262;

	class IKADIECNGND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKADIECNGND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKADIECNGND___C_CTOR_OFFSET))(this);
		}

		::IKADIECNGND* __cctor_b__88_0()
		{
			return ((::IKADIECNGND*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKADIECNGND___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
