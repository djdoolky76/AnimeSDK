#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define FKBJIEDHOJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x157E6E90)
#define FKBJIEDHOJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x157E6ED0)
#define FKBJIEDHOJG___C___SHOWGUIDEDETAILDIALOG_B__5_1_OFFSET UNITYSDK_OFFSET(0x157E6EE0)

inline static constexpr unsigned int FKBJIEDHOJG___c_TypeDefinitionIndex = 58653;

	class FKBJIEDHOJG___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DD10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DD18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKBJIEDHOJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG___C_CTOR_OFFSET))(this);
		}

		::System::Void __ShowGuideDetailDialog_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG___C___SHOWGUIDEDETAILDIALOG_B__5_1_OFFSET))(this);
		}

	};
