#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHFDINIJOL;
namespace System { class Object; }

#define KNHFDINIJOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875D20)
#define KNHFDINIJOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E875D60)
#define KNHFDINIJOL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E875D70)

inline static constexpr unsigned int KNHFDINIJOL___c_TypeDefinitionIndex = 31726;

	class KNHFDINIJOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHFDINIJOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL___C_CTOR_OFFSET))(this);
		}

		::KNHFDINIJOL* __cctor_b__18_0()
		{
			return ((::KNHFDINIJOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
