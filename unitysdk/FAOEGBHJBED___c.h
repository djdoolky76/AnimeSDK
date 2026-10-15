#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAOEGBHJBED;
namespace System { class Object; }

#define FAOEGBHJBED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32B870)
#define FAOEGBHJBED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B8B0)
#define FAOEGBHJBED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E32B8C0)

inline static constexpr unsigned int FAOEGBHJBED___c_TypeDefinitionIndex = 26090;

	class FAOEGBHJBED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOEGBHJBED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED___C_CTOR_OFFSET))(this);
		}

		::FAOEGBHJBED* __cctor_b__28_0()
		{
			return ((::FAOEGBHJBED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
