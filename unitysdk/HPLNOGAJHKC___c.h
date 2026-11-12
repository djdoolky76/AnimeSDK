#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPLNOGAJHKC;
namespace System { class Object; }

#define HPLNOGAJHKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8FA810)
#define HPLNOGAJHKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FA840)
#define HPLNOGAJHKC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8FA850)

inline static constexpr unsigned int HPLNOGAJHKC___c_TypeDefinitionIndex = 25949;

	class HPLNOGAJHKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLNOGAJHKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC___C_CTOR_OFFSET))(this);
		}

		::HPLNOGAJHKC* __cctor_b__23_0()
		{
			return ((::HPLNOGAJHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLNOGAJHKC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
