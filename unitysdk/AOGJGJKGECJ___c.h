#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOGJGJKGECJ;
namespace System { class Object; }

#define AOGJGJKGECJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6402E0)
#define AOGJGJKGECJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E640320)
#define AOGJGJKGECJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E640330)

inline static constexpr unsigned int AOGJGJKGECJ___c_TypeDefinitionIndex = 29820;

	class AOGJGJKGECJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOGJGJKGECJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ___C_CTOR_OFFSET))(this);
		}

		::AOGJGJKGECJ* __cctor_b__28_0()
		{
			return ((::AOGJGJKGECJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGJGJKGECJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
