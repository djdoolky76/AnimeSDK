#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKBBEOEGBAO;
namespace System { class Object; }

#define NKBBEOEGBAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB28940)
#define NKBBEOEGBAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB28970)
#define NKBBEOEGBAO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB28980)

inline static constexpr unsigned int NKBBEOEGBAO___c_TypeDefinitionIndex = 32027;

	class NKBBEOEGBAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKBBEOEGBAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO___C_CTOR_OFFSET))(this);
		}

		::NKBBEOEGBAO* __cctor_b__23_0()
		{
			return ((::NKBBEOEGBAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
