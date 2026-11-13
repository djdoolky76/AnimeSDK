#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEDLKIGJLEM;
namespace System { class Object; }

#define IEDLKIGJLEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20285770)
#define IEDLKIGJLEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202857B0)
#define IEDLKIGJLEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202857C0)

inline static constexpr unsigned int IEDLKIGJLEM___c_TypeDefinitionIndex = 35633;

	class IEDLKIGJLEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDLKIGJLEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM___C_CTOR_OFFSET))(this);
		}

		::IEDLKIGJLEM* __cctor_b__23_0()
		{
			return ((::IEDLKIGJLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDLKIGJLEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
