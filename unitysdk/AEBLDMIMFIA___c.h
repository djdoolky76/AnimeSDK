#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBLDMIMFIA;
namespace System { class Object; }

#define AEBLDMIMFIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200A1FB0)
#define AEBLDMIMFIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200A1FF0)
#define AEBLDMIMFIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x200A2000)

inline static constexpr unsigned int AEBLDMIMFIA___c_TypeDefinitionIndex = 35063;

	class AEBLDMIMFIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBLDMIMFIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA___C_CTOR_OFFSET))(this);
		}

		::AEBLDMIMFIA* __cctor_b__28_0()
		{
			return ((::AEBLDMIMFIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
