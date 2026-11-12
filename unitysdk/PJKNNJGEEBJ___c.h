#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJKNNJGEEBJ;
namespace System { class Object; }

#define PJKNNJGEEBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F22E380)
#define PJKNNJGEEBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22E3C0)
#define PJKNNJGEEBJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F22E3D0)

inline static constexpr unsigned int PJKNNJGEEBJ___c_TypeDefinitionIndex = 35323;

	class PJKNNJGEEBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJKNNJGEEBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ___C_CTOR_OFFSET))(this);
		}

		::PJKNNJGEEBJ* __cctor_b__18_0()
		{
			return ((::PJKNNJGEEBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKNNJGEEBJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
