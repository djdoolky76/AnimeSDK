#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFBGKPADOEC;
namespace System { class Object; }

#define DFBGKPADOEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F473E70)
#define DFBGKPADOEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F473EA0)
#define DFBGKPADOEC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F473EB0)

inline static constexpr unsigned int DFBGKPADOEC___c_TypeDefinitionIndex = 26627;

	class DFBGKPADOEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFBGKPADOEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC___C_CTOR_OFFSET))(this);
		}

		::DFBGKPADOEC* __cctor_b__18_0()
		{
			return ((::DFBGKPADOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGKPADOEC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
