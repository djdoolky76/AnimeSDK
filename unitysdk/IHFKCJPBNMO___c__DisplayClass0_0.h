#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHFKCJPBNMO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16410480)
#define IHFKCJPBNMO___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x16410CC0)

inline static constexpr unsigned int IHFKCJPBNMO___c__DisplayClass0_0_TypeDefinitionIndex = 67160;

	class IHFKCJPBNMO___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AOBICCEGAMM*>* displayActions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFKCJPBNMO___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0(::AOBICCEGAMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOBICCEGAMM*))((::PBYTE)hIl2Cpp + IHFKCJPBNMO___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this, a1);
		}

	};
