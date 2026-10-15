#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOOHICJHPGL;
namespace System { class Object; }

#define OOOHICJHPGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE730)
#define OOOHICJHPGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE770)
#define OOOHICJHPGL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DEAE780)

inline static constexpr unsigned int OOOHICJHPGL___c_TypeDefinitionIndex = 26069;

	class OOOHICJHPGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOOHICJHPGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL___C_CTOR_OFFSET))(this);
		}

		::OOOHICJHPGL* __cctor_b__43_0()
		{
			return ((::OOOHICJHPGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
