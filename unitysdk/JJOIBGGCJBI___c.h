#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJOIBGGCJBI;
namespace System { class Object; }

#define JJOIBGGCJBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF36440)
#define JJOIBGGCJBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF36480)
#define JJOIBGGCJBI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FF36490)

inline static constexpr unsigned int JJOIBGGCJBI___c_TypeDefinitionIndex = 34886;

	class JJOIBGGCJBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOIBGGCJBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI___C_CTOR_OFFSET))(this);
		}

		::JJOIBGGCJBI* __cctor_b__43_0()
		{
			return ((::JJOIBGGCJBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
