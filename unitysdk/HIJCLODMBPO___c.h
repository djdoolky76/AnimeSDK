#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIJCLODMBPO;
namespace System { class Object; }

#define HIJCLODMBPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56B8F0)
#define HIJCLODMBPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56B930)
#define HIJCLODMBPO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E56B940)

inline static constexpr unsigned int HIJCLODMBPO___c_TypeDefinitionIndex = 28371;

	class HIJCLODMBPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIJCLODMBPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO___C_CTOR_OFFSET))(this);
		}

		::HIJCLODMBPO* __cctor_b__38_0()
		{
			return ((::HIJCLODMBPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
