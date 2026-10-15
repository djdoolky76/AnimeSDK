#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEJGMBKPHEC;
namespace System { class Object; }

#define DEJGMBKPHEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E196E50)
#define DEJGMBKPHEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E196E90)
#define DEJGMBKPHEC___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E196EA0)

inline static constexpr unsigned int DEJGMBKPHEC___c_TypeDefinitionIndex = 27509;

	class DEJGMBKPHEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x311A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEJGMBKPHEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJGMBKPHEC___C_CTOR_OFFSET))(this);
		}

		::DEJGMBKPHEC* __cctor_b__58_0()
		{
			return ((::DEJGMBKPHEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJGMBKPHEC___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
