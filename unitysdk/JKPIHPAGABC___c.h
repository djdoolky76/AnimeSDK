#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKPIHPAGABC;
namespace System { class Object; }

#define JKPIHPAGABC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7433C0)
#define JKPIHPAGABC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E743400)
#define JKPIHPAGABC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E743410)

inline static constexpr unsigned int JKPIHPAGABC___c_TypeDefinitionIndex = 29901;

	class JKPIHPAGABC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x639E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPIHPAGABC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC___C_CTOR_OFFSET))(this);
		}

		::JKPIHPAGABC* __cctor_b__23_0()
		{
			return ((::JKPIHPAGABC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPIHPAGABC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
