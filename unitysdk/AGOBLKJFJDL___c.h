#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGOBLKJFJDL;
namespace System { class Object; }

#define AGOBLKJFJDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12F3E0)
#define AGOBLKJFJDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E269AF0)
#define AGOBLKJFJDL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E269B00)

inline static constexpr unsigned int AGOBLKJFJDL___c_TypeDefinitionIndex = 29618;

	class AGOBLKJFJDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGOBLKJFJDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL___C_CTOR_OFFSET))(this);
		}

		::AGOBLKJFJDL* __cctor_b__28_0()
		{
			return ((::AGOBLKJFJDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOBLKJFJDL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
