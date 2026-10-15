#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEOKJEOOOJD;
namespace System { class Object; }

#define PEOKJEOOOJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF23C0)
#define PEOKJEOOOJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2400)
#define PEOKJEOOOJD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DEF2410)

inline static constexpr unsigned int PEOKJEOOOJD___c_TypeDefinitionIndex = 26962;

	class PEOKJEOOOJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOKJEOOOJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKJEOOOJD___C_CTOR_OFFSET))(this);
		}

		::PEOKJEOOOJD* __cctor_b__48_0()
		{
			return ((::PEOKJEOOOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKJEOOOJD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
