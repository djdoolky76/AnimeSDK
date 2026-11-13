#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFNJCDINMLA;
namespace System { class Object; }

#define PFNJCDINMLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20246BC0)
#define PFNJCDINMLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20246C00)
#define PFNJCDINMLA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20246C10)

inline static constexpr unsigned int PFNJCDINMLA___c_TypeDefinitionIndex = 26397;

	class PFNJCDINMLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNJCDINMLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA___C_CTOR_OFFSET))(this);
		}

		::PFNJCDINMLA* __cctor_b__38_0()
		{
			return ((::PFNJCDINMLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJCDINMLA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
