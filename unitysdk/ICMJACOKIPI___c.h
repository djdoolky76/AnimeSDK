#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICMJACOKIPI;
namespace System { class Object; }

#define ICMJACOKIPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8C60)
#define ICMJACOKIPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8CA0)
#define ICMJACOKIPI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E5F8CB0)

inline static constexpr unsigned int ICMJACOKIPI___c_TypeDefinitionIndex = 26983;

	class ICMJACOKIPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICMJACOKIPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI___C_CTOR_OFFSET))(this);
		}

		::ICMJACOKIPI* __cctor_b__38_0()
		{
			return ((::ICMJACOKIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMJACOKIPI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
