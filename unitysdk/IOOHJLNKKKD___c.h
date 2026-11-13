#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOOHJLNKKKD;
namespace System { class Object; }

#define IOOHJLNKKKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F685460)
#define IOOHJLNKKKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6854A0)
#define IOOHJLNKKKD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6854B0)

inline static constexpr unsigned int IOOHJLNKKKD___c_TypeDefinitionIndex = 26523;

	class IOOHJLNKKKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x537B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOOHJLNKKKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD___C_CTOR_OFFSET))(this);
		}

		::IOOHJLNKKKD* __cctor_b__23_0()
		{
			return ((::IOOHJLNKKKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOHJLNKKKD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
