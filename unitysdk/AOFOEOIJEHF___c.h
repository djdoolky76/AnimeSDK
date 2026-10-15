#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFOEOIJEHF;
namespace System { class Object; }

#define AOFOEOIJEHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63F7E0)
#define AOFOEOIJEHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63F820)
#define AOFOEOIJEHF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E63F830)

inline static constexpr unsigned int AOFOEOIJEHF___c_TypeDefinitionIndex = 29361;

	class AOFOEOIJEHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOFOEOIJEHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF___C_CTOR_OFFSET))(this);
		}

		::AOFOEOIJEHF* __cctor_b__28_0()
		{
			return ((::AOFOEOIJEHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
