#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCLMHIOBNLA;
namespace System { class Object; }

#define KCLMHIOBNLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C31D0)
#define KCLMHIOBNLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203C3210)
#define KCLMHIOBNLA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203C3220)

inline static constexpr unsigned int KCLMHIOBNLA___c_TypeDefinitionIndex = 29964;

	class KCLMHIOBNLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCLMHIOBNLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA___C_CTOR_OFFSET))(this);
		}

		::KCLMHIOBNLA* __cctor_b__23_0()
		{
			return ((::KCLMHIOBNLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
