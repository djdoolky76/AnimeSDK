#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEDOFFJODEM;
namespace System { class Object; }

#define FEDOFFJODEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E361F60)
#define FEDOFFJODEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E361FA0)
#define FEDOFFJODEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E361FB0)

inline static constexpr unsigned int FEDOFFJODEM___c_TypeDefinitionIndex = 31365;

	class FEDOFFJODEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDOFFJODEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM___C_CTOR_OFFSET))(this);
		}

		::FEDOFFJODEM* __cctor_b__23_0()
		{
			return ((::FEDOFFJODEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDOFFJODEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
