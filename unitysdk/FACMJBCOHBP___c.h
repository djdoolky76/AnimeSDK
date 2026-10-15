#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FACMJBCOHBP;
namespace System { class Object; }

#define FACMJBCOHBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31D470)
#define FACMJBCOHBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31D4A0)
#define FACMJBCOHBP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E31D4B0)

inline static constexpr unsigned int FACMJBCOHBP___c_TypeDefinitionIndex = 33005;

	class FACMJBCOHBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x574B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FACMJBCOHBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP___C_CTOR_OFFSET))(this);
		}

		::FACMJBCOHBP* __cctor_b__38_0()
		{
			return ((::FACMJBCOHBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACMJBCOHBP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
