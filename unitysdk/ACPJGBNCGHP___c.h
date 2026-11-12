#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACPJGBNCGHP;
namespace System { class Object; }

#define ACPJGBNCGHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE3480)
#define ACPJGBNCGHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE34C0)
#define ACPJGBNCGHP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EFE34D0)

inline static constexpr unsigned int ACPJGBNCGHP___c_TypeDefinitionIndex = 29934;

	class ACPJGBNCGHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x371B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACPJGBNCGHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP___C_CTOR_OFFSET))(this);
		}

		::ACPJGBNCGHP* __cctor_b__28_0()
		{
			return ((::ACPJGBNCGHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
