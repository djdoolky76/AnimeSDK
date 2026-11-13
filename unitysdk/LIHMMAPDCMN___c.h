#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIHMMAPDCMN;
namespace System { class Object; }

#define LIHMMAPDCMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201C9DC0)
#define LIHMMAPDCMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201C9DF0)
#define LIHMMAPDCMN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201C9E00)

inline static constexpr unsigned int LIHMMAPDCMN___c_TypeDefinitionIndex = 33543;

	class LIHMMAPDCMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIHMMAPDCMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN___C_CTOR_OFFSET))(this);
		}

		::LIHMMAPDCMN* __cctor_b__23_0()
		{
			return ((::LIHMMAPDCMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
