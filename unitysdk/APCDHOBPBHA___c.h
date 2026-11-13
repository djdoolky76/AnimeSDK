#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APCDHOBPBHA;
namespace System { class Object; }

#define APCDHOBPBHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201B1340)
#define APCDHOBPBHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201B1380)
#define APCDHOBPBHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201B1390)

inline static constexpr unsigned int APCDHOBPBHA___c_TypeDefinitionIndex = 26300;

	class APCDHOBPBHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E4D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APCDHOBPBHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA___C_CTOR_OFFSET))(this);
		}

		::APCDHOBPBHA* __cctor_b__23_0()
		{
			return ((::APCDHOBPBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
