#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMPGPHLEJKF;
namespace System { class Object; }

#define HMPGPHLEJKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D32D0)
#define HMPGPHLEJKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D3310)
#define HMPGPHLEJKF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F8D3320)

inline static constexpr unsigned int HMPGPHLEJKF___c_TypeDefinitionIndex = 30917;

	class HMPGPHLEJKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMPGPHLEJKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGPHLEJKF___C_CTOR_OFFSET))(this);
		}

		::HMPGPHLEJKF* __cctor_b__18_0()
		{
			return ((::HMPGPHLEJKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPGPHLEJKF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
