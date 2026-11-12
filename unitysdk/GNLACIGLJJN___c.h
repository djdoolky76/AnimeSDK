#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNLACIGLJJN;
namespace System { class Object; }

#define GNLACIGLJJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7F5820)
#define GNLACIGLJJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F5850)
#define GNLACIGLJJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7F5860)

inline static constexpr unsigned int GNLACIGLJJN___c_TypeDefinitionIndex = 35450;

	class GNLACIGLJJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLACIGLJJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN___C_CTOR_OFFSET))(this);
		}

		::GNLACIGLJJN* __cctor_b__23_0()
		{
			return ((::GNLACIGLJJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
