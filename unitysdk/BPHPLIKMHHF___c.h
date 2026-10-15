#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHPLIKMHHF;
namespace System { class Object; }

#define BPHPLIKMHHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01B800)
#define BPHPLIKMHHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01B840)
#define BPHPLIKMHHF___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E01B850)

inline static constexpr unsigned int BPHPLIKMHHF___c_TypeDefinitionIndex = 30076;

	class BPHPLIKMHHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHPLIKMHHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHPLIKMHHF___C_CTOR_OFFSET))(this);
		}

		::BPHPLIKMHHF* __cctor_b__32_0()
		{
			return ((::BPHPLIKMHHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHPLIKMHHF___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
