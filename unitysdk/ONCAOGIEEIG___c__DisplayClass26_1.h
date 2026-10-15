#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGPPIHLOFF;
namespace System { class Object; }

#define ONCAOGIEEIG___C__DISPLAYCLASS26_1_CTOR_OFFSET UNITYSDK_OFFSET(0xBF472F0)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_1__APPLYPROPERTYWITHRESLOADING_B__3_OFFSET UNITYSDK_OFFSET(0xBF475F0)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_1__APPLYPROPERTYWITHRESLOADING_B__4_OFFSET UNITYSDK_OFFSET(0xBF47900)

inline static constexpr unsigned int ONCAOGIEEIG___c__DisplayClass26_1_TypeDefinitionIndex = 49442;

	template <typename T>
	class ONCAOGIEEIG___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::ODGPPIHLOFF* h1; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_1_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyPropertyWithResLoading_b__3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_1__APPLYPROPERTYWITHRESLOADING_B__3_OFFSET))(this, a1);
		}

		::System::Void _ApplyPropertyWithResLoading_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_1__APPLYPROPERTYWITHRESLOADING_B__4_OFFSET))(this);
		}

	};
