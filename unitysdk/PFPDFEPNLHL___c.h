#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPDFEPNLHL;
namespace System { class Object; }

#define PFPDFEPNLHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20247160)
#define PFPDFEPNLHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20247190)
#define PFPDFEPNLHL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x202471A0)

inline static constexpr unsigned int PFPDFEPNLHL___c_TypeDefinitionIndex = 31580;

	class PFPDFEPNLHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPDFEPNLHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL___C_CTOR_OFFSET))(this);
		}

		::PFPDFEPNLHL* __cctor_b__18_0()
		{
			return ((::PFPDFEPNLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
