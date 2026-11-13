#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOFHHEBDEOD;
namespace System { class Object; }

#define BOFHHEBDEOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6EBF0)
#define BOFHHEBDEOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6EC30)
#define BOFHHEBDEOD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF6EC40)

inline static constexpr unsigned int BOFHHEBDEOD___c_TypeDefinitionIndex = 26246;

	class BOFHHEBDEOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOFHHEBDEOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD___C_CTOR_OFFSET))(this);
		}

		::BOFHHEBDEOD* __cctor_b__23_0()
		{
			return ((::BOFHHEBDEOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFHHEBDEOD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
