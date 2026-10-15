#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILODDMBANJ;
namespace System { class Object; }

#define EILODDMBANJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27F210)
#define EILODDMBANJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27F250)
#define EILODDMBANJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E27F260)

inline static constexpr unsigned int EILODDMBANJ___c_TypeDefinitionIndex = 31949;

	class EILODDMBANJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILODDMBANJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ___C_CTOR_OFFSET))(this);
		}

		::EILODDMBANJ* __cctor_b__28_0()
		{
			return ((::EILODDMBANJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILODDMBANJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
