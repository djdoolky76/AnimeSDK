#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLFPHOOPELB;
namespace System { class Object; }

#define KLFPHOOPELB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBA5BB0)
#define KLFPHOOPELB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA5BF0)
#define KLFPHOOPELB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FBA5C00)

inline static constexpr unsigned int KLFPHOOPELB___c_TypeDefinitionIndex = 33678;

	class KLFPHOOPELB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x186D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLFPHOOPELB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFPHOOPELB___C_CTOR_OFFSET))(this);
		}

		::KLFPHOOPELB* __cctor_b__18_0()
		{
			return ((::KLFPHOOPELB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFPHOOPELB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
