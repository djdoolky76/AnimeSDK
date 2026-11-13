#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHMMNILOINC;
namespace System { class Object; }

#define IHMMNILOINC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7FD800)
#define IHMMNILOINC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FD840)
#define IHMMNILOINC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7FD850)

inline static constexpr unsigned int IHMMNILOINC___c_TypeDefinitionIndex = 31747;

	class IHMMNILOINC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHMMNILOINC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC___C_CTOR_OFFSET))(this);
		}

		::IHMMNILOINC* __cctor_b__23_0()
		{
			return ((::IHMMNILOINC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMMNILOINC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
