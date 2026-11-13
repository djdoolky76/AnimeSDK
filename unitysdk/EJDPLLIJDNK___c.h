#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJDPLLIJDNK;
namespace System { class Object; }

#define EJDPLLIJDNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9B860)
#define EJDPLLIJDNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9B8A0)
#define EJDPLLIJDNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF9B8B0)

inline static constexpr unsigned int EJDPLLIJDNK___c_TypeDefinitionIndex = 27724;

	class EJDPLLIJDNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJDPLLIJDNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK___C_CTOR_OFFSET))(this);
		}

		::EJDPLLIJDNK* __cctor_b__23_0()
		{
			return ((::EJDPLLIJDNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDPLLIJDNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
