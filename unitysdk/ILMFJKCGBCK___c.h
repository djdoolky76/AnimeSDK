#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILMFJKCGBCK;
namespace System { class Object; }

#define ILMFJKCGBCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9B9EE0)
#define ILMFJKCGBCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B9F20)
#define ILMFJKCGBCK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F9B9F30)

inline static constexpr unsigned int ILMFJKCGBCK___c_TypeDefinitionIndex = 31934;

	class ILMFJKCGBCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x542A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILMFJKCGBCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK___C_CTOR_OFFSET))(this);
		}

		::ILMFJKCGBCK* __cctor_b__43_0()
		{
			return ((::ILMFJKCGBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMFJKCGBCK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
