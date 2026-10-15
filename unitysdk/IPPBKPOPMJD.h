#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define IPPBKPOPMJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC03900)
#define IPPBKPOPMJD_FGOIDMKPLGF_OFFSET UNITYSDK_OFFSET(0x1EC036D0)

inline static constexpr unsigned int IPPBKPOPMJD_TypeDefinitionIndex = 35310;

	class IPPBKPOPMJD : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_AAKLPOBKFGL()
		{
			return (::System::Object**)UnitySDK::FromName("", "IPPBKPOPMJD")->GetStaticField(0x54620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPPBKPOPMJD_CCTOR_OFFSET))();
		}

		static ::System::Void FGOIDMKPLGF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPPBKPOPMJD_FGOIDMKPLGF_OFFSET))(a1);
		}

	};
