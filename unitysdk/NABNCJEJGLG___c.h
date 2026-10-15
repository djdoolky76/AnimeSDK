#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NABNCJEJGLG;
namespace System { class Object; }

#define NABNCJEJGLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA909D0)
#define NABNCJEJGLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA90A10)
#define NABNCJEJGLG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA90A20)

inline static constexpr unsigned int NABNCJEJGLG___c_TypeDefinitionIndex = 29695;

	class NABNCJEJGLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NABNCJEJGLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG___C_CTOR_OFFSET))(this);
		}

		::NABNCJEJGLG* __cctor_b__33_0()
		{
			return ((::NABNCJEJGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNCJEJGLG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
