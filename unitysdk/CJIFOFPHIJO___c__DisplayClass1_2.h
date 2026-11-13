#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class Item; }
namespace System { class Object; }

#define CJIFOFPHIJO___C__DISPLAYCLASS1_2_CTOR_OFFSET UNITYSDK_OFFSET(0x177D7A60)
#define CJIFOFPHIJO___C__DISPLAYCLASS1_2__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x177D7CB0)

inline static constexpr unsigned int CJIFOFPHIJO___c__DisplayClass1_2_TypeDefinitionIndex = 77283;

	template <typename T1, typename T2>
	class CJIFOFPHIJO___c__DisplayClass1_2 : public ::System::Object
	{
	public:
		::Proto::Item* protoItem; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFOFPHIJO___C__DISPLAYCLASS1_2_CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFOFPHIJO___C__DISPLAYCLASS1_2__CREATE_B__0_OFFSET))(this);
		}

	};
